//https://www.codingninjas.com/codestudio/problems/day-13-print-permutations-string_8230703?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

void help(string &s, int i, int j, vector<string> &ans) {
    if (i >= j) {
        string per = "";
        for (int k = 0; k < s.length(); k++) {
            per += s[k];
        }
        ans.push_back(per);
        return;
    }

    for (int k = i; k <= j; k++) {
        swap(s[i], s[k]);
        help(s, i + 1, j, ans);
        swap(s[i], s[k]);
    }
}

vector<string> findPermutations(string &s) {
    vector<string> ans;
    help(s, 0, s.length() - 1, ans);
    return ans;
}
