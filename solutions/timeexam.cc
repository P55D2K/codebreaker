#include <iostream>
using namespace std;

int main() {
    long long amt_of_minutes;
    cin >> amt_of_minutes;
    if (amt_of_minutes < 60) {
        cout << "00";
        if (amt_of_minutes < 10) cout << "0";
        cout << amt_of_minutes;
    } else {
        long long minutes = amt_of_minutes % 60;
        long long hours = amt_of_minutes / 60;
        if (hours >= 24) hours %= 24;
        if (hours < 10) cout << "0";
        cout << hours;
        if (minutes < 10) cout << "0";
        cout << minutes;
    }
    return 0;
}
