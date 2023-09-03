#include <iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bred;
};

struct Rectangle *fun() // function returning pointer to a object heap which can be accessed in main func
{
    struct Rectangle *p;
    p = new Rectangle;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); in c lang
    p->len = 10;
    p->bred = 20;

    return p;
}
int main()
{
    struct Rectangle *ptr = fun();
    cout << ptr->len << " " << ptr->bred << endl;
    return 0;
}