#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
        bool found=false;
    for (int i = 0; i <n; i++) {
        for (int j=i+1; j <n; j++) {
            if (a[i] == a[j]) {
                found=true;
                break;
        }
        }
    }
    if(found) cout<<"YES";
    else cout<<"NO";
    return 0;
}