//https://www.codingninjas.com/codestudio/problems/unique-paths_8230802?challengeSlug=striver-sde-challenge&leftPanelTab=1

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// vector<vector<int>> dp(m, vector<int>(n, 1));

	// for(int i=0; i<m; i++) {
	// 	for(int j=0; i<n; j++) {
	// 		dp[i][j] = dp[i-1][j] + dp[i][j-1];
	// 	}
	// }
	// return dp[m-1][n-1];

	int N = n+m-2;
	int r = m-1;
	double res = 1;

	for(int i=1; i<=r; i++) {
		res = res*(N-r+i)/i;
	}
	return (int)res;
}
