//https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   unordered_map<int, int> um;
   vector<vector<int>> ans;
   for(auto it: arr) {
      int cnt = um[s - it];
      vector<int> pair(2);
      pair[0] = it;
      pair[1] = s - it;
      while(cnt--) {
         ans.push_back(pair);
      }
      um[it] += 1;
   }

   for(int i=0; i<ans.size(); i++) {
      vector<int> temp = ans[i];
      sort(temp.begin(), temp.end());
      ans[i] = temp;
   }

   sort(ans.begin(), ans.end());
   
   return ans;
}
