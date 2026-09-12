#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    v.push_back(6);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    v.insert(v.begin() + 2, 10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}