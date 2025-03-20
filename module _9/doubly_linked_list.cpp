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
int  main()
{
    node *head= new node (10);
    node *a= new node(20);
    node *b=new node(30);
    node *tail=b;
    head->next=a;
    a->prev=head;
    a->next= b;
    b->prev= a;

    print(head);
    print_reverse(tail);
 return 0;
}