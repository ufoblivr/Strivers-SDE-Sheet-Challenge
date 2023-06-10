//https://www.codingninjas.com/codestudio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
int findMinimumCoins(int amount) {
    vector<int> denominations = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int i = 0; i < denominations.size(); i++) {
        int currentDenomination = denominations[i];
        while (amount >= currentDenomination) {
            count++;
            amount -= currentDenomination;
        }
    }

    return count;
}
