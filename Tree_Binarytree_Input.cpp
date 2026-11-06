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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        f->left = myLeft;
        f->right = myRight;
        q.pop();
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
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
    Node *root = input_tree();
    level_order(root);
    return 0;
}