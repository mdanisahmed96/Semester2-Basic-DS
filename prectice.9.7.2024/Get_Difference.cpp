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
    while(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=NULL;
}
int difference(node*head)
{
    if(head==NULL)
    {
        return 0 ;
    }
    int maxval=INT_MIN;
    int minval=INT_MAX;
    node *tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val>maxval)
        {
            maxval=tmp->val;
        }
        if(tmp->val<minval)
        {
            minval=tmp->val;
        }
        tmp=tmp->next;
    }
    return maxval-minval;
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
    cout<<difference(head);
  return 0;
}