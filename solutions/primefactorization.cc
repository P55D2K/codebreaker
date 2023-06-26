#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; cin >> n;
    map<long long int, long long int> mp;
    for (long long int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            mp[i]++; n /= i;
        }
    }
    if (n > 1) mp[n]++;

    for (auto i : mp) cout << i.first << "^" << i.second << endl;
    return 0;
}