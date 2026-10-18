
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;

    s.pop();

    cout << "After pop: " << s.top() << endl;

    stack<int> s2;

    s2.push(100);
    s2.push(200);

    s.swap(s2);

    cout << "After swap: " << s.top() << endl;

    s.emplace(300);

    cout << "After emplace: " << s.top() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
