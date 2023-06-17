//https://www.codingninjas.com/codestudio/problems/next-greater-element_8230718?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include<bits/stdc++.h>
using namespace std;
 vector < int > nextGreater(vector < int > & nums,int n) {
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = n - 1; i >= 0; i--) {
          while (!st.empty() && st.top() <= nums[i ]) {
              st.pop();
          }
          if (i < n) {
              if (!st.empty()) 
                  nge[i] = st.top();
          }
          st.push(nums[i]);
      }
      return nge;
    
};
