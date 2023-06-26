#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long q; cin >> q;
    vector<long long> output;
    long long a, b, m;
    for(long long i = 0; i < q; i++) {
        cin >> a >> b >> m;
        a = fmod(a, m);
        long long res = 1;
        while (b > 0) {
            if (b & 1) { res = (res * a) % m; }
            b = b >> 1;
            a = (a * a) % m;
        }
        output.push_back(res);
    }

    for(long long i = 0; i < q; i++) {
        cout << output[i] << '\n';
    }
    return 0;
}