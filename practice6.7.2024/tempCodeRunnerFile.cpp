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
void print(node *head)
{
    cout<<" your value list :";
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
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
void deleteposition(node *head,int pos)
{
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    node *deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}
void deletehead(node *&head)
{
    node *deletenode=head;
    head=head->next;
    delete deletenode;
}

int  main()
{
    node *head=new node(10);
    node *a =new node(20);
    node *b=new node(30);
    node *c =new node(40);
     
    head->next=a;
    a->next=b;
    b->next=c;
    print(head);
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"invalid"<<endl;
    }
    else if(pos==0)
    {
        deletehead(head);
    }
    else 
    {
        deleteposition(head,pos);
    }
        
    print(head);
   

 return 0;
}