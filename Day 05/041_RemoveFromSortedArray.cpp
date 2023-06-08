//https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge&leftPanelTab=0

int removeDuplicates(vector<int> &nums, int n) {
	int j = 0;
	for(int i=0; i<n; i++) {
		if(nums[j] != nums[i]) {
			nums[++j] = nums[i];
		}
	}
	return ++j;
}
