//https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
typedef long long ll;

ll merge(ll *arr, ll temp[], int s, int mid, int e) {
    int i = s, j = mid, k = s;
	ll invCnt = 0;
	while(i < mid && j <= e) {
	    if(arr[i] <= arr[j]) {
	        temp[k++] = arr[i++];
	    }
	    else {
	        temp[k++] = arr[j++];
	        invCnt += (mid - i);
	    }
	}
	while(i < mid) {
	    temp[k++] = arr[i++];
	}
	while(j <= e) {
	    temp[k++] = arr[j++];
	}
	for(i = s; i <= e; i++) {
	    arr[i] = temp[i];
	}
	return invCnt;
}

ll mergeSort(ll *arr, ll temp[], int s, int e) {
    ll invCnt = 0;
	if(s < e) {
		int mid = s + (e-s)/2;

		invCnt += mergeSort(arr, temp, s, mid);
		invCnt += mergeSort(arr, temp, mid+1, e);

		invCnt += merge(arr, temp, s, mid+1, e);
	}
    
	return invCnt;
}

ll getInversions(long long *arr, int n){
    // ll cnt = 0;
    // for(int i=0; i<n-1; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         if(arr[i] > arr[j]) {
    //             cnt++;
    //         }
    //     }
    // }
    // return cnt;


    ll temp[n];
	    return mergeSort(arr, temp, 0, n-1);
}
