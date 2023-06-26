#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    int currentamtofpigeons = 0;
    string s; bool rejected = false;

    for (int i = 0; i < m; i++) {
        cin >> s;
        if (s == "LAND") currentamtofpigeons++;
        if (s == "LEAVE") currentamtofpigeons--;
        if (s == "EVACUATE") currentamtofpigeons = 0;
        if (currentamtofpigeons > n) rejected = true;
    }

    if (rejected) cout << "PLAN REJECTED";
    else cout << "PLAN ACCEPTED";
    
    return 0;
}