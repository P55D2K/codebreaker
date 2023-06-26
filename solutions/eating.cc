// this code gets onl 95/100 i cant get past tle in subtask 6 :(
// and im too lazy to use xblue707's solution so :/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll ops; cin >> ops;
    bool final_output[ops];
    unordered_map<string, set<string>> person_brand;
    string tmp_person, tmp_brand;

    for (ll i = 0; i < ops; i++) {
        cin >> tmp_person >> tmp_brand;
        auto it = person_brand[tmp_person].find(tmp_brand);
        if (it != person_brand[tmp_person].end()) { final_output[i] = 0; }
        else {
            person_brand[tmp_person].insert(tmp_brand);
            final_output[i] = 1;
        }
    }

    for (ll i = 0; i < ops; i++) {
        if (final_output[i]) { cout << "YES\n"; }
        else { cout << "NO\n"; }
    }
    return 0;
}
