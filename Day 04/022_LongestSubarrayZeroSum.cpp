//https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=0

// TC = O(n)
// SC = O(n)

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  int n = arr.size();
  unordered_map<int, int> mp;
  int maxi = 0;
  int sum = 0;
  for(int i=0; i<n; i++) {
    sum += arr[i];
    if(sum==0) {
      maxi = i+1;
    }
    else {
      if(mp.find(sum) != mp.end()) {
        maxi = max(maxi, i-mp[sum]);
      }
      else {
        mp[sum] = i;
      }
    }
  }  
  return maxi;
}
