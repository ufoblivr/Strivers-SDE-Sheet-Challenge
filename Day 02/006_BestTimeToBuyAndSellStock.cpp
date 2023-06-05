//https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();
    for(int i=1; i<n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}
