#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, temp; cin >> x;
    vector<int> students(x);
    
    for (int i = 1; i <= x; i++) {
        cin >> temp;
        students[temp-1] = i;
    }
    for (auto i : students) { cout << i; }
    
    return 0;
}