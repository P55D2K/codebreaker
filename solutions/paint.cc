#include <bits/stdc++.h>
using namespace std;

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

    for (auto &job : painting_jobs) {
        cout << "index " << job.first << ", original price " << job.second[0] << ", increment " << job.second[1] << endl;
    }

    return 0;
}