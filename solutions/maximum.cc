#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << max(a, b);
    return 0;
}