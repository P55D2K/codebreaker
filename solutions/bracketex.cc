#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt; string bracket_seq;
    cin >> amt >> bracket_seq;

    stack<char> s;
    for (char bracket : bracket_seq) {
        if (bracket == '(' || bracket == '[' || bracket == '{')
            s.push(bracket);
        else {
            if (s.empty()) {
                cout << "Invalid";
                return 0;
            }
            char top = s.top();
            if ((bracket == ')' && top == '(') || (bracket == ']' && top == '[') || (bracket == '}' && top == '{'))
                s.pop();
            else {
                cout << "Invalid";
                return 0;
            }
        }
    }

    if (s.empty()) cout << "Valid";
    else cout << "Invalid";

    return 0;
}