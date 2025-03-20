#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* pre;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void inserttail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
}
bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    Node *start = head;
    Node *end = head;
    while (end->next != NULL) {
        end = end->next;
    }
    while (start != end && start->pre != end) {
        if (start->val != end->val) {
            return false;
        }
        start = start->next;
        end = end->pre;
    }
    return true;
}
int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        inserttail(head, tail, val);
    }  
    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}