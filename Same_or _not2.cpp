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
class mystack
{
public:
    Node *head = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {

            return true;
        }
        else
        {
            return false;
        }
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
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
        if (head == NULL)
            return;
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int N,M;
    cin >>N>>M;
    mystack A;
    myqueue B;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A.push(x);
    }
    for(int i=0;i<M;i++){
        int x;
        cin >> x;
        B.push(x);
    }
    if(A.size()!= B.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    while(!A.empty()){
        if (A.top() != B.front()) {
            cout << "NO" << endl;
            return 0;
    }
    A.pop();
    B.pop();
}
    cout<<"YES"<<endl;
    return 0;

}