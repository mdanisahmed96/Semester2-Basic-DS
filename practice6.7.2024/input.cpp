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
void inserttail(node *&head,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    while(head==NULL)
    {
        head=newnode;
        return ;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void print(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int  main()
{
    node *head=NULL;
    int v;
    while(cin>>v)
    {
        if(v==-1)
        break;
        inserttail(head,v);
    }
    print(head);

 return 0;
}