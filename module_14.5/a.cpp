#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main () {
int n;
cout<<"Enter the array size: "<<endl;
cin>>n;
int a[n];
cout<<"Enter the array : "<<endl;
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            int tmp;
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
}
cout<<"Sorted Array : "<<endl;
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" "<<endl;
}
return 0;
}