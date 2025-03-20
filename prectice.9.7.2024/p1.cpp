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
int  main()
{
    node *head=NULL;
    node *tail=NULL;
    node *head1=NULL;
    node *tail1=NULL;
    int val;
    while(cin>>val)
    {
        if(val==-1)
        {
            break;
        }
        input(head,tail,val);
    }
     while(cin>>val)
    {
        if(val==-1)
        {
            break;
        }
        input(head1,tail1,val);
    }
    if(size(head)==size(head1))
    {
        cout<< "YES" <<" ";
    }
    else
    {
        cout<< "NO" <<" ";
    }
 return 0;
}