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
void insertattail(node *&head,int v)
{
    node *newnode =new node(v);
    node *tmp=head;
    while(head==NULL)
    {
        head=newnode;
     
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
   
}
void insertatposition(node *head,int pos ,int v)
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
void  inserthead(node*&head,int v)
{
    node *newnode=new node(v);
    newnode->next=head;
    head=newnode;

}
int  main()
{
    node *head=NULL;
    while(true)
    {
        cout<<"option 1:insert at tail"<<endl;
        cout<<"option 2:insert at position"<<endl;
        cout<<"option 3:insert at head"<<endl;
        cout<<"option 4:print "<<endl;
        cout<<"option 5:terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"enter the value :"<<" ";
            int v;
            cin>>v;
            insertattail(head,v);
        }
        else if(op==2)
        {
        int pos,v;
        cout<<"enter the position:"<<" ";
        cin>>pos;
        cout<<"enter the value:"<<" ";
        cin >>v;
        if(pos==0)
        {
            inserthead(head,v);
        }
        else{
            insertatposition(head,pos,v);
        }
        }
        else if(op==3)
        {
            int v;
            cout<<"enter the value:"<<" ";
            cin>>v;
            inserthead(head,v);
        }
        else if(op==4)
        {
            print(head);
        }
        else if(op==5)
        {
            break;
        }
    }


 return 0;
}