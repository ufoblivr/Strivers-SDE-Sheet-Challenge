//https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        
        if(n == 0) {
            return ans;
        }
        
        vector<int> temp = intervals[0];
        
        for(int i = 0; i < n; i++) {
            if(intervals[i][0] <= temp[1]) {
                temp[1] = max(temp[1], intervals[i][1]);
            } else {
              ans.push_back(temp);
              temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
}
