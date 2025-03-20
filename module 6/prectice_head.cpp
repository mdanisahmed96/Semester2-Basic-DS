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
void  insert_at_head(node *&head,int v)
{
    node*newnode=new node(v);
    newnode->next=head;
    head=newnode;
}
void  printed_at_linked_list(node * head)
{
    cout<<"please enter link list :";
    node *tmp=head;
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
    while(true)
    {
        cout<<"option 1: insert at head :"<<endl;
        cout<<"option 2: printed at linked list :"<<endl;
        cout<<"option 3: terminate :"<<endl;
        int op;
        cin >>op;
         if(op==1)
        {
            int v;
            cout<<"enter the value :";
            cin >> v;
            insert_at_head(head,v);
        }
       else if(op==2)
        {
            printed_at_linked_list(head);
        }
       
        else if(op==3)
        {
            break;
        }
    }

 return 0;
}