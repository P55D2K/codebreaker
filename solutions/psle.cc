#include <bits/stdc++.h>
using namespace std;

int main() {
    int s; cin >> s;
    if (s >= 91) { cout << "A*"; return 0; }
    if (s >= 75) { cout << "A"; return 0; }
    if (s >= 60) { cout << "B"; return 0; }
    if (s >= 50) { cout << "C"; return 0; }
    if (s >= 35) { cout << "D"; return 0; }
    if (s >= 20) { cout << "E"; return 0; }
    if (s < 20) { cout << "U"; return 0; }
}