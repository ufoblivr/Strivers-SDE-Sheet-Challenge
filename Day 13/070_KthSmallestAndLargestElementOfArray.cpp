//https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_8230829?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<int> res;
    res.push_back(arr[k-1]);
    res.push_back(arr[n-k]);
    return res;
}
