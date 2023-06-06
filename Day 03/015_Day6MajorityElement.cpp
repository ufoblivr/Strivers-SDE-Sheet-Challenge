//https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> count;
    int majorityElement = -1;
    int majorityCount = 0;

	for(int i=0; i<n; i++) {
		count[arr[i]]++;
		if(count[arr[i]] > majorityCount) {
			majorityCount = count[arr[i]];
			majorityElement = arr[i];
		}
	}

	if(majorityCount > n/2) {
		return majorityElement;
	}
	else{
		return -1;
	}
}
