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
void input(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=NULL;
}
void recursion (node *n)
{
    if(n==NULL)
    {
        return ;
    }
    recursion(n->next);
    cout<<n->val<<" ";

}
void printreverse (node *n)
{
    if(n==NULL)
    {
        return ;
    }
    cout<<n->val<<" ";
     printreverse(n->next);

}
int  main()
{
    node *head=NULL;
    node *tail=NULL;

    int val;
    while(cin>>val)
    {
        if(val==-1)
        {
            break;
        }
        input(head,tail,val);
    }
    recursion(head);
    cout<<" ";
    // printreverse(head);

 return 0;
}