#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5]; // It is used to create dynamic memory pointer array in c++
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i]; // input to pointer array
    }
    cout << "pointer array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    delete[] p; // always close the dynamic memory after creating it
    // delete p; this is for single pointer variable
    return 0;
}