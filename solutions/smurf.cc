#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // faster input and output
    cin.tie(nullptr); cout.tie(nullptr); // faster input and output
    long long amt_of_smurfs; cin >> amt_of_smurfs;
    deque<long long> smurfs;
    long long height_of_smurf_temp; bool push_to_front = true;
    for (long long i = 0; i < amt_of_smurfs; i++) {
        cin >> height_of_smurf_temp;
        if (push_to_front) {
            smurfs.push_front(height_of_smurf_temp);
            push_to_front = false;
        } else {
            smurfs.push_back(height_of_smurf_temp);
            push_to_front = true;
        }
    }
    if (!push_to_front)
        for (auto i : smurfs) cout << i << " ";
    else
        for (auto i = smurfs.rbegin(); i != smurfs.rend(); i++) cout << *i << " ";
}