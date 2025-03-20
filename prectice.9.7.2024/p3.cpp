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
void input(node *&head,node*&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
    tail->next=NULL;
}
int size(node *head)
{
    node *tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count ++;
        tmp=tmp->next;
    }
    return count;

}
void middlenode(node* head)
{
    node* tmp=head;
    for(int i=0;i<size(head)/2-1;i++)
    {
        tmp=tmp->next;
    }
    if(size(head)%2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else cout<<tmp->next->val<<endl;
}


int  main()
{
    node *head=NULL;
    node *tail=NULL;
    int val;
    while(cin>>val)
    {
        if(val ==-1)
        {
            break;
        }
        input(head,tail,val);
    }
    middlenode(head);
    

 return 0;
}