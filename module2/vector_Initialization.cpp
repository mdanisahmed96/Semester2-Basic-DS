#include<bits/stdc++.h>
using namespace std;
int  main()
{
    // vector<int>v; type1
    //   vector< int >v(5); type2;
    // vector< int >v(5,100);type3

    // vector< int >v2(5,100);
    // vector< int >v(v2);  type4
    int a[6]={100,200,300,400,500,600};
    vector < int> v(a,a+6);
        for(int i=0;i<v.size();i++)
    {
        cout << v[i]<<" ";
    }
    cout<< endl;
    cout <<v.size()<<endl;
 return 0;
}