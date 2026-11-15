#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_tail(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (cin >> s && s != "end")
    {
        insert_tail(head, tail, s);
    }
    Node *c = head;
    int t;
    cin >> t;
    while (t--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit")
        {
            string addr;
            cin >> addr;
            Node *tmp = head;
            bool found = false;
            while (tmp != NULL)
            {
                if (tmp->val == addr)
                {
                    c = tmp;
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (found)
            {
                cout << c->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (c != NULL && c->prev != NULL)
            {
                c = c->prev;
                cout << c->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (c != NULL && c->next != NULL)
            {
                c = c->next;
                cout << c->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}