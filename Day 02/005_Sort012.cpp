//https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
void sort012(int *arr, int n) {
   int low = 0, mid = 0, high = n-1;
   while(mid<=high) {
      if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
      }
      else if (arr[mid] == 1) {
         mid++;
      }
      else {
         swap(arr[mid], arr[high]);
         high--;
      }
   }
}
