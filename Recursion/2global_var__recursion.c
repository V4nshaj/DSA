#include <stdio.h>
int x = 0;
int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r); // x=5

    r = fun(5);
    printf("%d\n", r); // x=10 Global variables have a lifetime that extends for the duration of the entire program. Once a global variable is initialized, it remains in memory and retains its value until the program ends.

    return 0;
}
