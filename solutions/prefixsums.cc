#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    
    vector<ll> ps(n+1);
    ll curr, sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> curr;
        sum += curr;
        ps[i] = sum;
    }

    // for (auto i : ps) { cout << i << " "; }
    // cout << '\n';

    ll first, second;
    for (int i = 0; i < q; i++) {
        cin >> first >> second;
        cout << (ps[second] - ps[first-1]) << '\n';
    }

    return 0;
}