#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt, tallest = -1e9, current; cin >> amt;
    for (int i = 0; i < amt; i++) {
        cin >> current;
        if (current > tallest) tallest = current;
    }
    cout << tallest;

    return 0;
}