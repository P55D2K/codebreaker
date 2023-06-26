#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt, temp, odd; cin >> amt;
    for (int i = 0; i < amt; i++) {
        cin >> temp;
        if (temp % 2 == 1) odd++;
    }
    cout << ((odd)*(amt - odd));

    return 0;
}