#include <iostream>
#include <set>
using namespace std;

#define stop ios_base::sync_with_stdio(false);
#define copying cin.tie(nullptr);
#define code cout.tie(nullptr);

int main() {
    stop copying code
    long double n; cin >> n;
    set<long double> s;
    for (long double i = 0; i < n; i++) {
        long double x; cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}