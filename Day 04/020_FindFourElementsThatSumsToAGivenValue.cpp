//https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge&leftPanelTab=0

// TC = O(n^3)
// SC = O(1)

string fourSum(vector<int> nums, int target, int n) {
    std::vector<std::vector<int>> result;

    //int n = nums.size();
    if (n < 4)
        return "No";

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({ nums[i], nums[j], nums[left], nums[right] });

                    // Move left pointer to the next different element
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // Move right pointer to the next different element
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < target)
                    left++;
                else
                    right--;
            }

            // Move j pointer to the next different element
            while (j < n - 2 && nums[j] == nums[j + 1])
                j++;
        }

        // Move i pointer to the next different element
        while (i < n - 3 && nums[i] == nums[i + 1])
            i++;
    }

    //return result;

    if(result.size()>0){
        return "Yes";
    }
    else{
        return "No";
    }
}
