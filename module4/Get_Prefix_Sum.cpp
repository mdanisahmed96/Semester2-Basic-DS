#include<bits/stdc++.h>
using namespace std;

int  main()
{
 long long int n;
 cin >> n;
 long long int a[n];
 for(int i=0;i<n;i++)
 {
    cin >>a[i];
 }
long long int sum_pre[n];
    sum_pre[0]=a[0];
     for(int i=1;i<n;i++)
    {
        sum_pre[i]=a[i]+sum_pre[i-1];
    }

    for(int i=n-1;i>=0;i--)
    {
        cout<<sum_pre[i]<<" ";
    }

 return 0;
}