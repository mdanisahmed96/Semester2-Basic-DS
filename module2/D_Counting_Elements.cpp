#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin >> n;
    vector<int >a(n);
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    vector(int elements(a.begin(),a.end());
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1])!=.end())
        {
            count ++;
        }
    }
    cout << count<<endl;
 return 0;
}