#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int l, queries, x;
    cin >> l;

    int arr[l+1];
    for (int i = 0; i < l; i++) { cin >> arr[i+1]; }
    sort(arr+1, arr+l+1);
    
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> x;
        int high = l, low = 1, mid;

        if (x >= arr[l])
			cout << "Smaller: " << l << ", Greater: " << 0 << '\n';
		else if (x <= arr[1])
			cout << "Smaller: " << 0 << ", Greater: " << l << '\n';
        else {
            while (high > low) {
                mid = high - (high - low) / 2;
                if (arr[mid] >= x) high = mid - 1;
                else low = mid;
            }
            cout << "Smaller: " << low;

            high = l; low = 1;
            while (high > low) {
                mid = (high + low) / 2;
                if (arr[mid] > x) high = mid;
                else low = mid + 1;
            }
            cout << ", Greater: " << l + 1 - high << '\n';
        }
    }

    return 0;
}