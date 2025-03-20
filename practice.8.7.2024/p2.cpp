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
void input(node *&head,node*&tail,int val)
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
bool duplicate(node *head)
{
    int count[101]={0};
    node *tmp=head;
    while(tmp!=NULL)
    {
        if(count[tmp->val]>0)
        {
            return true;
        }
        count[tmp->val]++;
        tmp=tmp->next;
    }
    return false;
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
    if(duplicate(head))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl; 
    }

 return 0;
}