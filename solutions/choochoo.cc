#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt_of_words; cin >> amt_of_words;
    int amt_of_chuggas;

    for (int i = 0; i < amt_of_words; i++) {
        string word; cin >> word;
        if (word == "chugga") amt_of_chuggas++;
    }

    if (amt_of_chuggas % 2 == 0) cout << "CHOO choo";
    else cout << "choo CHOO";

    return 0;
}