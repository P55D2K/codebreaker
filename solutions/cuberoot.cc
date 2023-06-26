#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n; cin >> n;
    deque<double> cuberootednums;
    for (int i = 0; i < n; i++) {
        double num; cin >> num;
        cuberootednums.push_back(cbrt(num));
    }

    for (auto &num : cuberootednums) { cout << num << " "; }

    return 0;
}