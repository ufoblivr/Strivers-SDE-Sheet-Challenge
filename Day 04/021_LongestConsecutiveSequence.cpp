//https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge&leftPanelTab=0

// TC = O(n)
// SC = O(n)

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // int cnt = 1;
    // int maxCnt = 1;

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] - arr[i - 1] == 1) {
    //         cnt++;
    //         maxCnt = std::max(maxCnt, cnt);
    //     }
    //     else if (arr[i] != arr[i - 1]) {
    //         cnt = 1;
    //     }
    // }

    //return maxCnt;

  
    unordered_set<int> numSet;

    for (int num : arr) {
        numSet.insert(num);
    }

    int maxLength = 0;

    for (int num : arr) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentLength = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentLength++;
            }

            maxLength = std::max(maxLength, currentLength);
        }
    }

    return maxLength;
}
