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
    cout<<"enter the value :";
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;

    }
    cout<<endl;
}
void deletion_from_position(node *head,int pos)
{
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    node*deletionnode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletionnode;
}
void deletehead(node *&head)
{
    node*deletionnode=head;
    head=head->next;
    delete deletionnode;

}
int  main()
{
    node*head=new node(10);
    node*a=new node(20);
    node*b=new node(30);
    node*c=new node(40);
    node*d=new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print(head);
    int pos;
    cout<<"enter the position :";
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"invalid index"<<endl;
    }
    else if(pos==0)
    {
        deletehead(head);
    }
    else{
        deletion_from_position(head,pos);
    }
      print(head);

 return 0;
}