#include <iostream>
using namespace std;

void swap(int &x, int &y) // directly represent actual variable
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x: %d y: %d\n", x, y);
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("a: %d b: %d\n", a, b);
    return 0;
}