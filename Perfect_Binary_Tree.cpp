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
        left = NULL;
        right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }

        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}
int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + count_node(root->left) + count_node(root->right);
}
int max_depth(Node *root)
{
    if (root == NULL)
        return -1;
    int left = max_depth(root->left);
    int rigt = max_depth(root->right);

    return max(left, rigt) + 1;
}
int main()
{
    Node *root = input_tree();
    int node = count_node(root);
    int depth = max_depth(root);
    int p = pow(2, depth + 1) - 1;
    if (node == p)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}