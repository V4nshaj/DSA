#include <stdio.h>
int fun(int n)
{
    static int x = 0; // if static is removed i.e declared as local variable then x is reset to 0  This means that every time fun is called, a new instance of x is created and initialized to 0. so 1 will be added to 0 every time
    // giving 1 + 1 + 1 + 1 + 1 = 5.
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
        // printf statement is unreachable due to its placement after return. the function exits, and control goes back to the caller. if return is removed it will show x values while calls the function recursively and calculates a value, but that value is not stored or returned.
        printf("x = %d ", x);
    }
    return 0; // When n is 0 (or negative) i.e n<=0, the function returns 0 to signal the end of the recursion
}
int main()
{
    int r;
    r = fun(5);
    printf("\nr = %d\n", r); // x=5

    r = fun(5);
    printf("\nr = %d\n", r); // x=10 x retains its value because it is declared as a static variable that means even after the function returns, the value of a static variable is preserved.

    return 0;
}