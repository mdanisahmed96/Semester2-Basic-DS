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
int size(node *head)
{
    node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void print(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
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
    for(node *i=head;i->next!=NULL;i=i->next)
    {
        for(node *j=i->next;j !=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print(head);

 return 0;
}