#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cost[n];
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    int max_cost = 0;
    for (int i = 0; i < n - k + 1; i++) {
        int current_cost = 0;
        for (int j = i; j < i + k; j++) {
            current_cost += cost[j];
        }
        if (current_cost > max_cost) {
            max_cost = current_cost;
        }
    }
    cout << max_cost;
    return 0;
}
