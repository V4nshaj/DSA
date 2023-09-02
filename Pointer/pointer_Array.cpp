#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int)); // malloc is used to create dynamic memory of pointer array in c
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i]; // input to pointer array
    }
    cout << "pointer array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    free(p); // helps in deallocating the dynamic memory in c
    return 0;
}