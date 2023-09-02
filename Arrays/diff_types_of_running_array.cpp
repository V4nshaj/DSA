#include <iostream>
using namespace std;
int main()
{
    int A[10] = {2, 4, 6, 8, 10, 12};
    for (int x : A) // reading inputs directly
    {
        cout << x << endl;
    }
    return 0;
}