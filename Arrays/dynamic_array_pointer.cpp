#include <iostream>
using namespace std;
int *fun(int n)
{
    int *p;
    p = new int[5];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    return p;
}
int main()
{
    int *ptr, s = 5;
    ptr = fun(s);
    for (int i = 0; i < s; i++)
    {
        cout << ptr[i] << " ";
    }
    return 0;
}