//https://www.codingninjas.com/codestudio/problems/maximum-activities_8230800?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity {
    int start;
    int finish;
};

bool compareByFinishTime(const Activity& a, const Activity& b) {
    return a.finish < b.finish;
}

int maximumActivities(vector<int>& start, vector<int>& finish) {
    int n = start.size();
    vector<Activity> activities(n);

    for (int i = 0; i < n; i++) {
        activities[i].start = start[i];
        activities[i].finish = finish[i];
    }

    sort(activities.begin(), activities.end(), compareByFinishTime);

    int count = 1; 
    int prevFinish = activities[0].finish;

    for (int i = 1; i < n; i++) {
        if (activities[i].start >= prevFinish) {
            count++;
            prevFinish = activities[i].finish;
        }
    }

    return count;
}
