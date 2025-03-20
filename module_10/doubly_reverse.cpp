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
   void print(node*head)
   {
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
   }
   void printreverse(node *tail)
   {
        node *tmp=tail;
        while(tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp=tmp->prev;
        }
        cout<<endl;
   }
   void reverse(node *head,node*tail)
   {
    node *i=head;
    node *j=tail;
    while(i!=j &&i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
   }
int  main()
{
    node *head=new node(10);
    node *a=new node(20);
    node*b=new node(30);
    node *c=new node(40);
       node *tail=c;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
 
    print(head);
    printreverse(tail);


 return 0;
}