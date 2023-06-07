//https://www.codingninjas.com/codestudio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 

int uniqueSubstrings(string input) {
    vector<int> mp(256, -1);

    int left = 0, right = 0;
    int n = input.size();
    int len = 0;
    while(right < n) {
        if(mp[input[right]] != -1) left = max(mp[input[right]]+1, left);

        mp[input[right]] = right;

        len = max(len, right-left+1);
        right++;
    }
    return len;
}
