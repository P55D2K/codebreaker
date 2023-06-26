#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d; cin >> n >> d; // n is the number of potatoes, d is the number of days
    int a[n]; // a is the array of the number of potatoes in each bag
    for (int i = 0; i < n; i++) { cin >> a[i]; } // read in the number of potatoes in each bag
    sort(a, a + n); // sort the array of the number of potatoes in each bag
    int sum = 0; // sum is the total number of potatoes eaten
    for (int i = 0; i < d; i++) { sum += a[n - 1 - i]; } // add the number of potatoes in the d largest bags to the total number of potatoes eaten
    cout << sum;
    return 0;
}