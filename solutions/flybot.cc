#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int h, w;
    cin >> h >> w;

    int dp[h][w];
    int a[h][w];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char x;
            cin >> x;

            if (x == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }

    dp[0][0] = 1;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i + j == 0) continue;
            if (i != 0) dp[i][j] += dp[i-1][j];
            if (j != 0) dp[i][j] += dp[i][j-1];
            if (a[i][j] == 1) dp[i][j] = 0;
            dp[i][j] %= 1000000007;
        }
    }

    cout << dp[h-1][w-1];
}
