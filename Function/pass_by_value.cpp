#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x: %d y: %d", x, y);
}
int main()
{
    int a = 10, b = 20;
    printf("a: %d b: %d\n", a, b);
    swap(a, b);
    return 0;
}