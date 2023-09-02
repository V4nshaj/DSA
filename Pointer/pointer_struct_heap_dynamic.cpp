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
    Rectangle *p; // pointer to struct
    // p = (Rectangle *)malloc(sizeof(Rectangle)); // memory in heap in c language
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // in c language same as above
    p = new Rectangle;                                        // in c++ language
    p->len = 10;
    p->bred = 5;
    cout << p->len * p->bred;
    return 0;
}
