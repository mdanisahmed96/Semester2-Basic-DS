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
class myqueue
{
    public:
    node *head=NULL;
    node *tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node *newnode=new node(val);
        if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
     tail->next=newnode;
     tail=newnode;
    }
    void pop()
    {
        sz--;
        node *deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        return true;
        else
        {
            return false;
        }
    }
};  
int  main()
{
    myqueue q;
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

 return 0;
}