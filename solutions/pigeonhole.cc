#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, h;
    cin >> n >> h;

    vector<int> holes(h);
    int cmd, id, maxvalue = -1;
    for (int i = 0; i < n; i++) {
        cin >> cmd >> id;
        id %= h;

        if (cmd == 1) {
            holes[id]++;
            maxvalue = max(maxvalue, holes[id]);
        } else if (cmd == 0) {
            holes[id]--;
            if (holes[id] == maxvalue - 1)
                maxvalue = *max_element(holes.begin(), holes.end());
        }

        cout << maxvalue << "\n";
    }

    return 0;
}