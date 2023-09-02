#include <iostream>
using namespace std;
void fun(int A[], int n)
{
    cout << endl
         << sizeof(A) / sizeof(int) << endl; // this size is by pointer
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    for (int a : A)
    {
        cout << a << " ";
    }
    cout << endl
         << sizeof(A) / sizeof(int) << endl; // this size is by array size
    fun(A, 5);
    return 0;
}