#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int>b(n);
  for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    vector<int>c(2*n);
      for (int i = 0; i < n; ++i) {
        c[i] = b[i];
        c[n + i] = a[i];
    }
      for(int i=0;i<2*n;i++)
    {
       cout<<c[i]<<" ";
    }
 return 0;
}