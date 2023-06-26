#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool isPrime(long long number)
{
    if(number < 2) return false;
    long long _root = floor(sqrt(number));
    for(int i = 2;  i <= _root; i++) { if(number % i == 0) return false; }
    return true;
}

int main()
{
    long long p; cin >> p;
    bool isPPrime = isPrime(p);

    if(isPPrime) cout << "Prime";
    else cout << "Not Prime";

    return 0;
}
