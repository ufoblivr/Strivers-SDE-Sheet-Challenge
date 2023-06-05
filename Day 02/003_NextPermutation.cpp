//https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge&leftPanelTab=1

 #include <bits/stdc++.h> 

vector<int> nextPermutation(vector<int>& permutation, int n) {
    int idx = -1;
    int m = permutation.size();
    for (int i = m - 2; i >= 0; i--) {
        if (permutation[i] < permutation[i + 1]) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        reverse(permutation.begin(), permutation.end());
    }
    else {
        int nextIdx = -1;
        for (int i = m - 1; i > idx; i--) {
            if (permutation[i] > permutation[idx]) {
                nextIdx = i;
                break;
            }
        }
        swap(permutation[idx], permutation[nextIdx]);
        reverse(permutation.begin() + idx + 1, permutation.end());
    }

    return permutation;
}
