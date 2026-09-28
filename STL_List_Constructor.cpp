#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<int> r = {1, 2, 3, 4, 5};
    int a[] = {10, 20, 30, 40, 50};
    list<int> r2(a, a + 4);
   // list<int> r2(r);
    for (int val : r2)
    {
        cout << val << endl;
    }

    list<int> l(10, 3);
    cout << *l.begin() << endl;
    // for(auto it=l.begin();it!=l.end();it++){
    //  cout<<*it<<endl;
    //}
    // range based forlope
    // use to vector
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}