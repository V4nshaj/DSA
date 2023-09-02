#include <iostream>

using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A;           // p=&A is wrong
    int *a1 = &A[0]; // Also we can specicaly store value
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    cout << *a1 << endl;

    return 0;
}