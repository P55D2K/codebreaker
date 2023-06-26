#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    if (c <= 0) return 0;

    int amt = 1;
    for (int i = 1; i < c; i++) {
        if (n == 1) continue;
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        amt++;
    }

    if (c <= amt) cout << n;
    else cout << -1;

    return 0;
}