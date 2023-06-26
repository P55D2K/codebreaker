#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n;
    map<string, long long> contestants;
    string name; long long score;
    for (long long i = 0; i < n; i++) {
        cin >> name >> score;
        contestants[name] = score;
    }

    long long c; cin >> c;
    long long total_score_of_selected = 0;
    for (long long i = 0; i < c; i++) {
        cin >> name;
        total_score_of_selected += contestants[name];
    }

    cout << total_score_of_selected / c << endl;
    return 0;
}
