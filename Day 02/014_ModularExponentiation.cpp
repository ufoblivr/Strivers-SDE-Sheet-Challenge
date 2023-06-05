//https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	if (n == 0)
        return 1;

    long long result = 1;
    long long base = x;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % m;
        }

        base = (base * base) % m;
        n /= 2;
    }

    return result;
}
