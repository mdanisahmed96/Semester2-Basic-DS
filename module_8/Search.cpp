#include <bits/stdc++.h>

using namespace std;
class Node 
{
public:
    int val;
    Node* next;
    Node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertNode(Node* &head, Node* &tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } 
    
        tail->next = newNode;
        tail = newNode;
    
}
int findValue(Node* head, int x) 
{
    int index = 0;
    Node* tmp = head;
    while (tmp != NULL) 
    {
        if (tmp->val == x) 
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        Node* head = NULL;
        Node* tail = NULL;
        int val;
        while (true) 
        {
            cin >> val;
            if (val == -1) 
            {
                break;
            }
            insertNode(head, tail, val);
        }
        int x;
        cin >> x;
        int result = findValue(head, x);
        cout << result << endl;
       
    }
    return 0;
}