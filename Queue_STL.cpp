#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(20);
    if (!q.empty())
        ;
    q.pop();
    if (!q.empty())
        q.front();
    q.size();
    queue<int> q2;

    q2.push(100);
    q2.push(200);

    q.swap(q2);
    return 0;
}