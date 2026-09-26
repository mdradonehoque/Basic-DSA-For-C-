#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;

        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delet_at_head(Node* &head, Node* &tail){
    Node*deleteNode= head;
    head=head->next;
    delete deleteNode;
    //handle corner case
    if(head==NULL){
        tail=NULL;
        return;
    }
    head->prev=NULL;
    

}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    delet_at_head(head, tail);
    print_forward(head);

    return 0;
}