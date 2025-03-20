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
void insert_at_any_position(node*head,int pos,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"inserted any position :"<<endl;
}
void insertathead(node *&head, int val)
{
    node* newNode=new node(val);
    newNode->next = head;
    head = newNode;
}
void print_link(node *head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int  main()
{
    node *head=NULL;
    
    while (true)
    {
        cout<<"option 1:insert at any position :"<<endl;
        cout<<"option 2:insert at head :"<<endl;
        cout<<"option 3:printed at linked list :"<<endl;
        cout<<"option 4:terminate"<<endl;
        
        int op;
        cin>>op;
        if(op==1)
        {
            int pos,v;
            cout<<"enter the position : ";
            cin >>pos;
            cout<<"enter the value : ";
            cin >>v;
            insert_at_any_position(head,pos,v);
        }
         if(op==2)
        {
            int v;
            cout<<"enter the value :";
            cin >> v;
            insertathead(head,v);
        }
        else if(op==3)
        {
            print_link(head);
        }
       
        else if(op==4)
        {
            break;
        }
    }

 return 0;
}