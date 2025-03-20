#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int Q;
    cin >> Q;
    queue<string> q;

    while (Q--) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else {
            if (q.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}