#include <iostream>
#include <algorithm>
using namespace std;

#define ll unsigned long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll cn[] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000, 500000, 1000000};
    ll n, tc = 0; cin >> n;

    int low = 0, high = 12, mid;
    while (low < high) {
        mid = (low + high) / 2;
        if (cn[mid] <= n) low = mid + 1;
        else high = mid;
    }

    int current = mid;
    while (mid >= 0) {
        while (n >= cn[mid]) {
            tc += n / cn[mid];
            n %= cn[mid];
        }
        mid--;
    }

    cout << tc;
    return 0;
}