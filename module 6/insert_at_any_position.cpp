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
void insert_at_tail(node *&head,int v)
{
    node *newnode=new node(v);
    if(head==NULL)
    {
        head = newnode;
        cout << endl<< "Inserted at head" << endl<< endl;
        return;
    }
    node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout << endl << "Inserted at tail" << endl<< endl;
}
void print_at_link_list(node *head)
{
    cout <<endl;
    cout<<"your linked list :";
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_any_position(node *head,int pos,int v)
{
    node *newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<pos -1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<"insert at position :"<<pos<<endl<<endl;
  
}
int  main()
{
    node *head=NULL;
    while(true)
    {
        cout<<"option 1:Insert at tail :"<<endl;
        cout<<"option 2:print at link list :"<<endl;
        cout<<"option 3:insert at any position :"<<endl;
        cout<<"option 4: Terminate :"<<endl;
        int op;
        cin >> op;
        if(op==1)
        {
              cout<<"please enter value :"<<endl;
            int v;
            cin >>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_at_link_list(head);
        }
        else if(op==3)
        {
            int pos;
            cout<<"enter your position :";
            cin >> pos;
            int v;
            cout<<"enter your position :";
            cin >>v;
            insert_at_any_position(head,pos,v);

        }
        else if(op==4)
        {
            break;
        }
    }

 return 0;
}