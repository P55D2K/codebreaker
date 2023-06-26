#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        return gcd(b % a, a);
    }
}

int main() {
    long long na, nb;
    cin >> na >> nb;
    long long g = gcd(na, nb); cout << g;
    return 0;
}