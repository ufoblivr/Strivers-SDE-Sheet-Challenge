//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	for(int i=0; i<n; i++) {
		arr1[m+i] = arr2[i];
	}
	sort(arr1.begin(), arr1.end());

	return arr1;
}
