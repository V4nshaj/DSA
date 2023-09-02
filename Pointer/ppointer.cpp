#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("Value of a %d\n ", a);
    printf("Using Pointer %d\n ", *p);
    printf("Address of a %d\n ", p);
    printf("Address of a %d ", &a);
}