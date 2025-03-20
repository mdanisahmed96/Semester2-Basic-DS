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
void printatlinkedlist(node *head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(node*head)

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
void insert(node *head,int pos,int v)
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
int  main()
{
    node*head=new node(10);
    node*a=new node(20);
    node*b=new node(30);
    node*c=new node(40);
    node*d=new node(20);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    printatlinkedlist(head);
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"invalid index "<<endl;
    }
    else
    {
        insert(head,pos,val);
    }
        printatlinkedlist(head);

 return 0;
}