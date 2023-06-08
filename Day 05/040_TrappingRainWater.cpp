//https://www.codingninjas.com/codestudio/problems/trapping-rain-water_8230693?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
long getTrappedWater(long *height, int n){
    long left = 0, right = n-1, res = 0, maxLeft = 0, maxRight = 0;

    while(left<=right) {
        if(height[left] <= height[right]) {
            if(height[left]>=maxLeft) maxLeft = height[left];
            else res += maxLeft-height[left];

            left++;
        }
        else {
            if(height[right] >= maxRight) maxRight = height[right];
            else res += maxRight-height[right];

            right--;
        }
    }
    return res;
}
