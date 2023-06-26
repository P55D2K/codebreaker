#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; // n is the number of bricks
    int a[n]; // a is the array of heights of the bricks
    for (int i = 0; i < n; i++) { cin >> a[i]; } // read in the heights of the bricks
    stack<int> s; // s is the stack of bricks
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= a[i]) { s.pop(); } // remove all bricks that are smaller than or equal to the current brick
        s.push(a[i]); // add the current brick to the stack
    }
    while (!s.empty()) { 
        cout << s.top() << endl; // print the heights of the bricks in the stack
        s.pop(); // remove the topmost brick from the stack
    }
    return 0;
}