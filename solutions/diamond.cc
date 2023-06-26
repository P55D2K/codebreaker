#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int radius_of_diamond; cin >> radius_of_diamond;
    int length = 2 * radius_of_diamond - 1;

    for (int x = 0; x < length; x++) {
        for (int y = 0; y < length; y++) {
            int distance = abs(x - radius_of_diamond + 1) + abs(y - radius_of_diamond + 1);
            if (distance < radius_of_diamond) cout << "*";
            else cout << " ";
        }
    }

    return 0;
}