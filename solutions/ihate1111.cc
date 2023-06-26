#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long t; cin >> t;
    while (t--) {
        long long n; cin >> n; bool c11 = false;
        for(long long i = 0; i < 20; i++) {
            if (n % 11 == 0) { c11 = true; break; }
            n -= 111;
            if (n < 0) break;
        }
        if (c11) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}