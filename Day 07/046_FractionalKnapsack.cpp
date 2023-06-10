//https://www.codingninjas.com/codestudio/problems/fractional-knapsack_8230767?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 

bool compareByRatio(const pair<int, int>& a, const pair<int, int>& b) {
    double ratioA = static_cast<double>(a.second) / a.first;
    double ratioB = static_cast<double>(b.second) / b.first;
    return ratioA > ratioB;
}

double maximumValue(vector<pair<int, int>>& items, int n, int w) {
    sort(items.begin(), items.end(), compareByRatio);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].first <= w) {
            currentWeight += items[i].first;
            totalValue += items[i].second;
        } else {
            int remainingWeight = w - currentWeight;
            totalValue += (static_cast<double>(remainingWeight) / items[i].first) * items[i].second;
            break;
        }
    }

    return totalValue;
}
