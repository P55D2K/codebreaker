// as i took part in the contest tyx2019 gave me hints on subtask 2 and 3
// this code does not ac subtask 1 tho

#include <iostream>
#include <algorithm>
using namespace std;

// fastscan pastebin: https://pastebin.com/Mxk3c1SZ
void fastscan(int &number) {
    bool negative = false; register int c;
    number = 0; c = getchar();
    if (c == '-') { negative = true; c = getchar(); }
    for (; (c>47 && c<58); c=getchar()) { number = number *10 + c - 48; }
    if (negative) { number *= -1; }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int subtasknum;
    fastscan(subtasknum);

    if (subtasknum == 2) {
        int length; fastscan(length);
        int arr[length];
        for (int i = 0; i < length; i++) {
            int temp; fastscan(temp);
            arr[i] = temp;
        }
        sort(arr, arr + length);
        for (const int& i : arr) printf("%d ", i);
    } else if (subtasknum == 3) {
        // EC3 where e is 2.7182...
        // C in physics is the speed of light -> but in km/ms
        // mop the floor refers to the floor function
        // floor(299.792458 * 299.792458 * 299.792458 * 2.718281828) = 73241392

        // when i is 69, A[i] is 420
        // when i is 73241392, A[i] is "BEICHEN IOI NOW!!!"
        // when i is a positive integer and is not 69 or 73241392, A[i] is 69

        cout << "BEICHEN IOI NOW!!!";
    } // for subproblem 4 im emailing krawthekrow :)
    // he says he doesnt know but u have to go toilet
    else if (subtasknum == 4) {
        cout << "https://tinyurl.com/deccourse22";
        // click the link :)
    }

    return 0;
}