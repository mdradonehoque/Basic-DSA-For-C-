#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    myqueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}