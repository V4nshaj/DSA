#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int len;
    int bred;
};

int main()
{
    Rectangle r = {10, 5}; // in c++ struct is not necessary
    Rectangle *p = &r;
    p->len = 10;
    p->bred = 5;
    cout << p->len * p->bred;
    return 0;
}
