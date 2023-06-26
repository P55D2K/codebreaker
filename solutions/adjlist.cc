#include <bits/stdc++.h>
using namespace std;

int main() {
    // Turn off the synchronization between the C and C++ streams
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long n, e; // n = number of vertices, e = number of edges
    cin >> n >> e; // Input the number of vertices and edges

    vector<long long> adj[n]; // Create a vector to store the adjacency list of each vertex

    for (long long i = 0; i < e; i++) {
        long long a, b; // a = first vertex, b = second vertex
        cin >> a >> b; // Input the two vertices
        adj[a - 1].push_back(b); // Add the second vertex to the adjacency list of the first vertex
        adj[b - 1].push_back(a); // Add the first vertex to the adjacency list of the second vertex
    }

    for (auto i : adj) {
        for (long long j = 0; j < i.size(); j++)
            j == i.size() - 1 ? cout << i[j] : cout << i[j] << ' '; // Output the adjacency list of each vertex
        cout << '\n'; // Output a new line
    }

    return 0;
}