#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, m;
    cin >> N >> m;
    int k[m];
    for (int i = 0; i < m; i++) {
        cin >> k[i];
    }
    sort(k, k + m);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < m; i++) {
        sum += k[i];
        if (sum <= N) {
            count++;
        }
    }
    cout << count;
    return 0;
}