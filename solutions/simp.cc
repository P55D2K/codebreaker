#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a1, a2, b1, b2, c1, c2;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if (b1 < a1 && b2 < a2 && c1 < a1 && c2 < a2) cout << "YES";
    else if (b1 < a1 && b2 > a2 && c1 < a1 && c2 > a2) cout << "YES";
    else if (b1 > a1 && b2 < a2 && c1 > a1 && c2 < a2) cout << "YES";
    else if (b1 > a1 && b2 > a2 && c1 > a1 && c2 > a2) cout << "YES";
    else cout << "NO";

    return 0;
}