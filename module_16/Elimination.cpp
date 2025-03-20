#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        stack<char> st;
        for (char c : str) 
        {
            bool topIsZero = !st.empty() && st.top() == '0';
            bool currentIsOne = c == '1';
            
            if (topIsZero && currentIsOne) 
            {
                st.pop();
            } else {
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