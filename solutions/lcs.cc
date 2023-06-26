#include <bits/stdc++.h>
using namespace std;

long long lcs(string word1, string word2) {
    map<long long, map<long long, long long>> lcs;
    for (long long i = 1; i <= word1.length(); i++) {
        for (long long j = 1; j <= word2.length(); j++) {
            if (word1[i - 1] == word2[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    return lcs[word1.length()][word2.length()];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word1, word2;
    cin >> word1 >> word2;

    cout << lcs(word1, word2) << endl;
    return 0;
}