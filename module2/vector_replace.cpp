#include<bits/stdc++.h>
using namespace std;
int  main()
{
     vector<int>v={1,2,3,4,5,2,2,3,4,2};
    //  replace(v.begin(),v.end()-1,2,100);
    //   for(int x:v)
    // {
    //     cout << x <<" ";
    // }
    auto it =find(v.begin(),v.end(),2);
    // cout <<*it;
    if(it==v.end()) cout<<"not found";
    else
    cout<<"found";
 return 0;
}