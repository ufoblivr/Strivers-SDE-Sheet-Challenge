//https://www.codingninjas.com/codestudio/problems/maximum-consecutive-ones_8230736?challengeSlug=striver-sde-challenge&leftPanelTab=0

int longestSubSeg(vector<int> &nums , int n, int k){
    int cnt = 0, ans = 0, j = -1;
    for(int i=0; i<n; i++) {
        if(nums[i]==0) {
            cnt++;
        }

        while(cnt > k) {
            j++;
            if(nums[j]==0) {
                cnt--;
            }
        }

        int len = i - j;
        if(len > ans) {
            ans = len;
        }

       
    }
    return ans;
}
