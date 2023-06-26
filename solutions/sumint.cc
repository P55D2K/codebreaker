#include <bits/stdc++.h>
using namespace std;

int main() {
    int amt_of_numbers; cin >> amt_of_numbers;
    long long sum = 0;
    for (int i = 0; i < amt_of_numbers; i++) {
        long long number; cin >> number;
        sum += number;
    }
    cout << sum;
    return 0;
}