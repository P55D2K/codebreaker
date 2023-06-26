#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    stack<int> topics;
    unordered_map<int, bool> deleted;

    int current_topic = -1;

    for (int i = 0; i < n; i++) {
        int type, topic; cin >> type;
        if (type == 1) {
            cin >> topic;
            topics.push(topic);
            current_topic = topic;
        } else if (type == 2) {
            cin >> topic;
            deleted[topic] = true;
            if (topic == current_topic) {
                topics.pop();
                while (!topics.empty() && deleted[topics.top()]) {
                    topics.pop();
                }
                if (topics.empty()) {
                    current_topic = -1;
                } else {
                    current_topic = topics.top();
                }
            }
        } else if (type == 3) {
            if (current_topic != -1) {
                deleted[current_topic] = true;
                topics.pop();
                while (!topics.empty() && deleted[topics.top()]) {
                    topics.pop();
                }
                if (topics.empty()) {
                    current_topic = -1;
                } else {
                    current_topic = topics.top();
                }
            }
        } else if (type == 4) {
            cout << current_topic << endl;
        }
    }

    return 0;
}
