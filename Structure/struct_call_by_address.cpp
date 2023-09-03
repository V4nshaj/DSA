#include <iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bred;
};

int area(struct Rectangle *p)
{
    p->len = 20;
    cout << p->len << " " << p->bred << endl;
    return p->len * p->bred;
}
int main()
{
    struct Rectangle r = {10, 5};
    cout << area(&r) << endl;
    cout << r.len << " " << r.bred << endl;
    return 0;
}