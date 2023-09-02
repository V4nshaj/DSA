#include <iostream>
#include <stdio.h> //can write the c header file for c code
using namespace std;

int main()
{
    int A[5] = {0}; // all the elements iinitialized to 0
    int B[] = {1, 2, 3, 4, 5, 6, 7};
    int C[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    A[0] = 12;
    A[1] = 15;
    A[2] = 16;
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]); // writing c code in c++
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    cout << C[9] << endl;
    return 0;
}