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
void print_recursion(node *m)
{
    if(m==NULL)
    return ;
    cout<<m->val<<" ";
    print_recursion(m->next);

}
void print_reverse(node *m)
{
    if(m==NULL)
    return ;
    print_reverse(m->next);
    cout<<m->val<<" ";
}
int  main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *d=new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    print_recursion(head);
    cout<<endl;

    print_reverse(head);
   
 return 0;
}