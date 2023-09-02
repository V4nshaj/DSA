#include <iostream>
using namespace std;
void fun(int *A, int n)
{
    cout << sizeof(A) / sizeof(int) << endl; // this size is by pointer
    A[0] = 25;
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};

    cout << sizeof(A) / sizeof(int) << endl; // this size is by array size
    fun(A, 5);
    for (int a : A)
    {
        cout << a << " ";
    }
    return 0;
}