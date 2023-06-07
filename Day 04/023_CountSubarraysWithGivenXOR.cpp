//https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_8230830?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x) {
    map<int, int> freq;
    int cnt = 0;
    int xorr = 0;
    for(auto it: arr) {
        xorr = xorr ^ it;

        if(xorr==x) {
            cnt++;
        }

        if(freq.find(xorr ^ x) != freq.end()) {
            cnt += freq[xorr ^ x];
        }

        freq[xorr] += 1;
    }
    return cnt;
}
