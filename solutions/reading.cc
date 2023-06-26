#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long double n_amt_of_books_cat_has, k_max_amt_of_words_cat_can_read;
    cin >> n_amt_of_books_cat_has >> k_max_amt_of_words_cat_can_read;

    long double w_words_per_page_in_ith_book, p_pages_in_ith_book, amt_of_books_cat_can_read = 0;

    for (long double i = 0; i < n_amt_of_books_cat_has; i++) {
        cin >> w_words_per_page_in_ith_book >> p_pages_in_ith_book;
        if ((w_words_per_page_in_ith_book * p_pages_in_ith_book) < k_max_amt_of_words_cat_can_read)
            amt_of_books_cat_can_read++;
    }

    cout << amt_of_books_cat_can_read;

    return 0;
}