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
void insertatposition(node*head,int pos,int v)
{
    node*newnode=new node(v);
    node*tmp=head;
    for(int i=1;i<pos -1;i++)
    {
        tmp=tmp->next;
    }    
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void insert_head(node *&head,int v)
{
    node*newnode= new node(v);
    newnode->next=head;
    head=newnode;
}
void insertail(node*&head,node*&tail,int v)
{
    node*newnode=new node(v);
    while(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int  size(node*head)
{
    int count =0;
    node*tmp=head;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;

}
void print(node*head)
{
    cout<<"enter the value :"<<" ";
    node*tmp=head;
    while (tmp!=0)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    

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
    cout<<"enter the position :"<<endl;
    cin>>pos;
    cout<<"enter the value :"<<endl;
    cin>>v;
    if(pos>=size(head))
    {
          cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,v);
    }
    else if(pos==size(head))
    {
        insertail(head,tail,v);
    }
    else{
        insertatposition(head,pos,v);
    }
    print(head);

 return 0;
}