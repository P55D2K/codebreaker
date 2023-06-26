#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        if (i % a == 0 && i % b == 0) { cout << "FizzBuzz" << endl; continue; }
        else if (i % a == 0) { cout << "Fizz" << endl; continue; }
        else if (i % b == 0) { cout << "Buzz" << endl; continue; }
        cout << i << endl;
    }
    return 0;
}