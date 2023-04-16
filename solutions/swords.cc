// DO NOT USE THIS CODE
// IT DOESNT WORK :/

#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n_amt_of_swords; cin >> n_amt_of_swords;
    deque<long long> a_attack, b_defense;
    long long useful_swords = 0;

    long long a, b;
    for (long long i = 0; i < n_amt_of_swords; i++) {
        cin >> a >> b; 
        a_attack.push_back(a); b_defense.push_back(b);
    }
    // cout << "size of list " << a_attack.size() << endl;

    bool isuseless;
    for (long long i = 0; i < n_amt_of_swords; i++) {
        // cout << "iteration " << i  << " start useful_swords " << useful_swords << endl;
        isuseless = false;
        for (long long j = 0; j < n_amt_of_swords; j++) {
            if (isuseless) continue;
            else if (a_attack[j] > a_attack[i] || b_defense[j] > b_defense[i]) isuseless = true;
        }
        if (!isuseless) useful_swords++;
        // cout << "iteration " << i << " end useful_swords " << useful_swords << endl;
    }

    cout << useful_swords;
    return 0;
}


// DO NOT USE THIS CODE EITHER ITS JUST AN ATTEMPT TO MAKE IT WORK BUT IT DOESNT
// #include <bits/stdc++.h>
// using namespace std;

// class Sword {
//     public:
//         long long attack;
//         long long defense;
//         bool isuseless;
//         Sword(long long a, long long b) {
//             attack = a;
//             defense = b;
//             isuseless = false;
//         }
// };

// // if a is better then true
// bool compare(Sword a, Sword b) {
//     if (a.attack < b.attack || a.defense < b.defense) return false;
//     else return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long n_amt_of_swords; cin >> n_amt_of_swords;
//     vector<Sword> swords;

//     long long a, b;
//     for (long long i = 0; i < n_amt_of_swords; i++) {
//         cin >> a >> b;
//         swords.push_back(Sword(a, b));
//     }

//     long long useful_swords = 0;
//     for (long long i = 0; i < n_amt_of_swords; i++) {
//         for (long long j = 0; j < n_amt_of_swords; j++) {
//             if (i == j) continue;
//             else if (compare(swords[i], swords[j])) swords[i].isuseless = true;
//         }
//         if (!swords[i].isuseless) useful_swords++;
//     }

//     cout << useful_swords;
//     return 0;
// }