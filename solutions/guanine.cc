#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long amt_of_instructions; cin >> amt_of_instructions;
    deque<string> dna, toprint;

    for (long long i = 0; i < amt_of_instructions; i++) {
        string instruction, value; cin >> instruction >> value;
        if (instruction == "ADD_BACK") 
            dna.push_back(value);
        else if (instruction == "ADD_FRONT") 
            dna.push_front(value);
        else if (instruction == "SNIP_BACK")
            dna.erase(dna.begin() + stoi(value) + 1, dna.end());
        else if (instruction == "SNIP_FRONT")
            dna.erase(dna.begin(), dna.begin() + stoi(value) + 1);
        else if (instruction == "QUERY")
            toprint.push_back(dna[stoi(value)]);
        
    }

    for (long long i = 0; i < toprint.size(); i++) { cout << toprint[i] << endl; }

    return 0;
}