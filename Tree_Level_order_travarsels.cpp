#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        /* code */
        // ber kore dibo
        Node *f = q.front();
        q.pop();
        // oi node nie kaj
        cout << f->val << " ";
        // children push
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    root->left = a;
    root->right = b;
    b->left = c;
    level_order(root);

    return 0;
}