#include<bits/stdc++.h>
using namespace std;
int  main()
{
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin >>x;
    //     v.push_back(x);
    // }
    // for(int bal:v)
    // {
    //     cout<<bal<<endl;
    // }
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int bal:v)
    {
        cout<<bal<<endl;
    }

 return 0;
}