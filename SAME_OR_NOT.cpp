#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    stack<int> A;
    queue<int> B;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }
    if (N != M)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!A.empty())
    {
        if (A.top() != B.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        A.pop();
        B.pop();
    }
    cout << "YES" << endl;
    return 0;
}