#include <bits/stdc++.h>
using namespace std;

int main() {
    int amt_of_fib_no_to_generate;
    cin >> amt_of_fib_no_to_generate;

    long long mod_by = 998244353;
    long long fib[amt_of_fib_no_to_generate];

    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << "\n" << fib[1] << "\n";

    if (amt_of_fib_no_to_generate >= 2) {
        for (int i = 2; i <= amt_of_fib_no_to_generate; i++) {
            fib[i] = (fib[i-1] + fib[i-2]) % mod_by;
            cout << fib[i] << "\n";
        }
    }

    return 0;
}