#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int  main()
{
    node a(20),b(30);
    a.next=&b;
    cout<<a.val<<endl;
    cout<<a.next->val<<endl;

 return 0;
}
