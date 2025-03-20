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
void print (node *head)
{
    node *tmp = head;
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
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    
}
void insert_at_position(node *head,int pos,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next =tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}
int size(node *head)
{
    node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_head(node *&head,node*&tail,int v)
{
    node *newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_tail(node *&head, node *&tail, int v)
{
    node *newNode = new node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int  main()
{
    node *head= new node (10);
    node *a= new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *tail=c;
    head->next=a;
    a->prev=head;
    a->next= b;
    b->prev= a;
    b->next=c;
    c->prev=b;
    int pos,v;
    cin >>pos>>v;
    if(pos >size(head))
    {
        cout<<"invalid "<<endl;
    }
    else if(pos==0)
    {
      insert_head(head,tail,v);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,v);
    }
    else
    {
          insert_at_position(head,pos,v);
    }
  
    print(head);
   
    print_reverse(tail);
 return 0;
}