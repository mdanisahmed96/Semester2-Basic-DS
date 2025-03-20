#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        stack<char> st;
        for (char c : str) {
            bool topisOpposite = !st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0'));
            if (topisOpposite) 
            {
                st.pop();
            }
             else {
                st.push(c);
            }
        }
        if (st.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}