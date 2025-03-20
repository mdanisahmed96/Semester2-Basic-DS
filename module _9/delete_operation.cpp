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
void delete_position(node *&head,node *&tail,int pos)
{
    node *tmp=head;
    for(int i=1;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode ;
}
void delete_tail(node *&head,node *&tail)
{
    node *deletetail=tail;
    tail=tail->prev;
    delete deletetail;
    if(tail==NULL)
    {
        head=NULL;
        return ;
    }
    tail->next=NULL;
}
void delete_head(node *&head,node *&tail)
{
    node *deletehead=head;
    head=head->next;
    delete deletehead;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;

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
    int pos;
    cin >>pos;
    
    if(pos>size(head))
    {
        cout<<"invalid"<<endl;
    }
    else if(pos==0)
    {
       delete_head(head,tail);
    }
    else if(pos==size(head))
    {
         delete_tail(head,tail);
    }
    else{
     delete_position(head,tail,pos);
    }
    print(head);
    print_reverse(tail);
 return 0;
}
 