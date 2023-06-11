//https://www.codingninjas.com/codestudio/problems/subsets-ii_8230855?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
void helper(int i, vector<int> &arr, vector<int> &subset, vector<vector<int>> &ans)
{
   
    if (i >= arr.size())
    {
        ans.push_back(subset);
        return;
    }

    subset.push_back(arr[i]);

    helper(i + 1, arr, subset, ans);

    subset.pop_back();

    while (i + 1 < arr.size() && arr[i] == arr[i + 1]) i++;

   
    helper(i + 1, arr, subset, ans);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> subset;

    sort(arr.begin(), arr.end());
    helper(0, arr, subset, ans);

    sort(ans.begin(), ans.end());
    return ans;
}
