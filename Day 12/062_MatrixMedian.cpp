//https://www.codingninjas.com/codestudio/problems/matrix-median_8230735?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int> ans;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }
    
    sort(ans.begin(), ans.end());
    int m=ans.size()/2;
    int x=ans[m];
    return x;
}
