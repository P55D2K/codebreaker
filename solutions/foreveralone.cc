#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<bool> is_alone(n, true);

    int a, b, cats_alone = 0;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if (a != b) {
            is_alone[a] = false;
            is_alone[b] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        if (is_alone[i])
            cats_alone++;
    }

    cout << cats_alone << endl;
    return 0;
}