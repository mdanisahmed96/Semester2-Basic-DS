#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) 
    {
        int n;
        cin >> n;  
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> s(a.begin(), a.end());  
        vector<int> v(s.begin(), s.end());  

        for(int value : v) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
