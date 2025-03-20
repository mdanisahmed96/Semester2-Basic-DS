#include<bits/stdc++.h>
using namespace std;

int  main()
{
    list<int>mylist={60,20,10,40,50,10,10,20};
    // mylist.remove(20);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();
    for(int v:mylist)
    {
        cout<<v<<endl;
    }
 return 0;
}