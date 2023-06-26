#include <bits/stdc++.h>
using namespace std;

int findMin(int N, int A[]) { // N is the size of the array A[]
    int minimum = INT_MAX; // Set minimum to the maximum value of an integer
    for(int i = 0; i < N; i++) if(minimum > A[i]) minimum = A[i]; // Loop through the array and find the minimum value
    return minimum;
}z