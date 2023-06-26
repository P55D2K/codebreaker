#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

#define stop_copying_code ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
    stop_copying_code;

    int n; cin >> n; // number of brackets
    string s; cin >> s; // the brackets

    stack<char> brackets; // stack of brackets
    int valid_prefixes = 0; // number of valid prefixes

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') { // if the bracket is an open bracket
            brackets.push(s[i]); // push it into the stack
        } else { // if the bracket is a close bracket
            if (brackets.empty()) { // if the stack is empty, then the prefix is invalid
                break; // break out of the loop
            } else { // if the stack is not empty, then pop the top bracket
                brackets.pop(); // pop the top bracket
            }
        }
        if (brackets.empty()) { // if the stack is empty, then the prefix is valid
            valid_prefixes++; // increment the number of valid prefixes
        }
    }

    cout << valid_prefixes << endl;
}