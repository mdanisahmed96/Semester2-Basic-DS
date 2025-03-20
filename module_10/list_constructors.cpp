#include<bits/stdc++.h>
using namespace std;

int  main()
{
    // list<int>mylist(10,5);
    // list<int>list2={20,30,40,50,60};
    // int a[10]={10,20,30,40};
    vector<int>v={5,10,15,20,25,30};
    list<int>mylist(v.begin(),v.end());
    // for(auto it=mylist.begin();it!=mylist.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(int v:mylist)
    {
        cout<<v<<endl;
    }

 return 0;
}