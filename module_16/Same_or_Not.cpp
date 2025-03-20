#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        s.push(a);
    }
    for (int i = 0; i < m; i++) 
    {
        int b;
        cin >> b;
        q.push(b);
    }

    if (n != m) 
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            
            break;
        }
        s.pop();
        q.pop();
    }

    if (s.empty()||q.empty()) 
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
