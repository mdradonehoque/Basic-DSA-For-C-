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
void level_node(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }
    queue<Node *> q;
    q.push(root);
    int flag = 0;
    while (!q.empty())
    {
        int sz = q.size();
        if (flag == level)
        {
            for (int i = 0; i < sz; i++)
            {
                Node *p = q.front();
                q.pop();
                cout << p->val << " ";
            }
            return;
        }
        for (int i = 0; i < sz; i++)
        {
            Node *p = q.front();
            q.pop();
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        flag++;
    }
    cout << "Invalid";
}
int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    level_node(root, level);
    return 0;
}
