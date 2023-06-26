#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d, e, total;
    const ll mod = 1e9 + 9;
    cin >> a >> b >> c >> d >> e;
    a %= mod; b %= mod; c %= mod; d %= mod; e %= mod;
    total *= a; total %= mod;
    total *= b; total %= mod;
    total *= c; total %= mod;
    total *= d; total %= mod;
    total *= e; total %= mod;
    cout << total;
    
    return 0;
}