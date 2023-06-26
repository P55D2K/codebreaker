#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt; cin >> amt;
    int length, width;
    long long totalarea = 0;
    for (int i = 0; i < amt; i++) {
        cin >> length >> width;
        totalarea += (length * width);
    }
    cout << totalarea;
    
    return 0;
}