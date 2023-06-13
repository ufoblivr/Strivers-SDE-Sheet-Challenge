//https://www.codingninjas.com/codestudio/problems/palindrome-partitioning_8230726?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 

bool isPalindrome(int i, int j, string &s) {
        
        while(i < j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    void solve(int i, string &s, vector<string> &op, vector<vector<string>> &ans) {
        
        if(i == s.size()) {
            ans.push_back(op);
            return;
        }
        
        for(int j = i; j < s.size(); j++) {
            if(isPalindrome(i, j, s)) {
                op.push_back(s.substr(i, j-i+1));
                solve(j + 1, s, op, ans);
                op.pop_back();
            }
        }
    }
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
      vector<vector<string>> ans;
        vector<string> op;
        
        solve(0, s, op, ans);
        return ans;
}
