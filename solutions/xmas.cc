#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    map<int, int> person_gift;
    for (int i = 1; i <= n; i++)
        cin >> person_gift[i];

    map<int, int> gift_person;
    for (int i = 1; i <= n; i++)
        gift_person[person_gift[i]] = i;

    for (int i = 1; i <= n; i++)
        cout << gift_person[i] << " ";

    return 0;
}