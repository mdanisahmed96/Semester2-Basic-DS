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
void print(node*head)
{
    cout<<"enter the number :";
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout <<endl;
}
int  size(node *head)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
void insert (node*head,int pos,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void inserthead(node*&head,int v)
{
    node*newnode=new node(v);
    newnode->next=head;
    head=newnode;
}
void insert_at_tail(node*&head,node*&tail,int v)
{
    node*newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
}
int  main()
{
    node *head=new node(10);
    node *a= new node(20);
    node *b= new node(30);
    node *c= new node(40);
    node *d= new node(50);
    node*tail=d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print(head);
    cout<<"tail->"<<tail->val<<endl;
    int pos,v;
    cout<<"enter the position :";
    cin>>pos;
    cout<<"enter the value :";
    cin>>v;
    if(pos>size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        inserthead(head,v);
    }
     else if(pos==size(head))
    {
        insert_at_tail(head,tail,v);
    }

    else{
        insert (head,pos, v);
    }
     print(head);
        cout<<"tail->"<<tail->val<<endl;
 return 0;
}