//https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n) {
	// for(int i=0; i<n; i++) {
	// 	for(int j=i+1; j<n; j++) {
	// 		if(arr[i]==arr[j]) {
	// 			return arr[i];
	// 		}
	// 	}
	// }

	for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
            return abs(arr[i]);
        }
        arr[index] = -arr[index];
    }
    return -1; 
}
