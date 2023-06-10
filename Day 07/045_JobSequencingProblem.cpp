//https://www.codingninjas.com/codestudio/problems/job-sequencing-problem_8230832?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 

bool comp(vector<int>& job1, vector<int>& job2) {
    return job1[1] > job2[1];
}

int jobScheduling(vector<vector<int>> &jobs) {
    sort(jobs.begin(), jobs.end(), comp);

    int maxProfit = 0;
    int maxDeadline = 0;
    
    for(int i=0; i<jobs.size(); i++) {
        maxDeadline = max(maxDeadline, jobs[i][0]);
    }

    set<int, greater<int>> slots;

    for(int i=maxDeadline; i>0; i--) {
        slots.insert(i);
    }

    for(int i=0; i<jobs.size(); i++) {
        if(slots.size()==0 || jobs[i][0]<*slots.rbegin()) {
            continue;
        }


        int availSlots = *slots.lower_bound(jobs[i][0]);
        maxProfit = maxProfit + jobs[i][1];
        slots.erase(availSlots);
    }
    
    return maxProfit;
}
