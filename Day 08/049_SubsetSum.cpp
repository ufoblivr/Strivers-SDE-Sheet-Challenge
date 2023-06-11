//https://www.codingninjas.com/codestudio/problems/subset-sum_8230859?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <vector>
#include <algorithm>

void fun(int idx, int sum, std::vector<int>& arr, int N, std::vector<int>& sumSub) {
    if (idx == N) {
        sumSub.push_back(sum);
        return;
    }

    fun(idx + 1, sum + arr[idx], arr, N, sumSub);
    fun(idx + 1, sum, arr, N, sumSub);
}

std::vector<int> subsetSum(std::vector<int>& num) {
    int N = num.size();
    std::vector<int> sumSub;
    fun(0, 0, num, N, sumSub);
    std::sort(sumSub.begin(), sumSub.end());

    return sumSub;
}
