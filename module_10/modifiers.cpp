#include<bits/stdc++.h>
using namespace std;

int  main()
{
    list<int>mylist={1,2,3,4,5};
    // list<int>newlist;
    // newlist.assign(mylist.begin(),mylist.end());
    // mylist.push_back(100);
    // mylist.push_front(200);
    // mylist.pop_back();
    // mylist.pop_front();
//    mylist.insert(next(mylist.begin(),2),100);
    //   mylist.insert(next(mylist.begin(),2),next(mylist.begin()));
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    // replace(mylist.begin(),mylist.end(),1,100);
    // for(int v:mylist)
    // {
    //     cout<<v<<endl;
    // }
    auto it=find(mylist.begin(),mylist.end(),5);
    if(it==mylist.end())
    {
        cout<<"not found "<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }
 return 0;
}