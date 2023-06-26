#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    // Turn off the synchronization between the C and C++ streams
    ostream::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m_cards, k_index; // m_cards = number of cards, k_index = index of the card
    cin >> m_cards >> k_index;

    deque<long long> cards; // Create a deque to store the cards
    for (long long i = 0; i < m_cards; i++) cards.push_back(i); // Initialize the cards

    string shuffle_sequence; // Create a string to store the shuffle sequence
    cin >> shuffle_sequence; // Input the shuffle sequence

    long long temp; // Create a temporary variable to store the card

    for (long long i = 0; i < shuffle_sequence.length() - 1; i++) {
        char c = shuffle_sequence[i]; // Get the current character in the shuffle sequence
        if (c == 'A') {
            cards.push_back(cards.front()); // Push the first card to the back
            cards.pop_front(); // Pop the first card
        } else {
            cards.push_back(cards[1]); // Push the second card to the back
            temp = cards.front(); // Store the first card in the temporary variable
            cards.pop_front(); cards.pop_front(); // Pop the first two cards
            cards.push_front(temp); // Push the first card to the front
        }
    }

    cout << cards[k_index - 1] << ' ' << cards[k_index] << ' ' << cards[k_index + 1]; // Output the cards

    return 0;
}