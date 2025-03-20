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
    while(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=NULL;
}
void inserthead(node *&head,int val)
{
    node *newnode=new node (val);
    newnode->next=head;
    head=newnode;

}
void deletenode(node *head)
{
    node *tmp = head;
    for (int i = 1; tmp!=NULL; i++)
    {
        tmp = tmp->next;
    }
    node *deletenode = tmp->next; 
    tmp->next = tmp->next->next;
    delete deletenode;
}
void deletehead(node *&head)
{
    node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void print(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
    }
}
int  main()
{
    node *head=NULL;
    node *tail=NULL;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            inserthead(head,v);
        }
        if(x==1)
        {
            input(head,tail,v);
        }
        
    }
    print(head);
 return 0;
}