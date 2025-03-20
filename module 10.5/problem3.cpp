#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
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
void print_reverse(node *tail)
{
    node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(node *head)
{
    node *tmp=head;
    int count =0;
    while(tmp!=NULL)
    {
        count ++;
        tmp=tmp->next;
    }
    return count;
}
void inserttail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;

    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
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
        inserttail(head,tail,val);
    }
    // print_reverse(tail);
    print(head);
 return 0;
}