//https://www.codingninjas.com/codestudio/problems/return-subsets-sum-to-k_8230706?challengeSlug=striver-sde-challenge&leftPanelTab=0

void findSub(vector<int> arr, int i, int n, int k, vector<vector<int>> &ans, vector<int> smallAns) {
    if(n==0) {
        if(k==0) {
            ans.push_back(smallAns);
        }
        return;
    }

    findSub(arr, i+1, n-1, k, ans,  smallAns);
    
    smallAns.push_back(arr[i]);
    findSub(arr,  i+1,  n-1, k-arr[i], ans, smallAns);
} 

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k) {
    vector<vector<int>> ans;
    vector<int> smallAns;
    findSub(arr, 0, n, k, ans, smallAns);
    return ans;
}
