#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    stack<int> Stack1,st;
    

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Stack1.push(x);
    }

    while (!Stack1.empty()) {
        st.push(Stack1.top());
        Stack1.pop();
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}