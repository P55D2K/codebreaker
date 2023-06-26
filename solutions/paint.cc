#include <bits/stdc++.h>
using namespace std;

bool compareJobs(const pair<int, vector<int>>& job1, const pair<int, vector<int>>& job2) {
    return job1.second[1] > job2.second[1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, vector<int>> painting_jobs;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int original_price_for_job_i; cin >> original_price_for_job_i;
        painting_jobs[i].push_back(original_price_for_job_i);
    }

    for (int i = 0; i < n; i++) {
        int increment_for_job_i; cin >> increment_for_job_i;
        painting_jobs[i].push_back(increment_for_job_i);
    }

    vector<pair<int, vector<int>>> job_vec(painting_jobs.begin(), painting_jobs.end());
    sort(job_vec.begin(), job_vec.end(), compareJobs);
    
    int counter = 0, total_sum = 0;
    for (auto &job : job_vec) {
        total_sum += job.second[0] + counter * job.second[1];
        counter++;
    }

    cout << total_sum;
    return 0;
}