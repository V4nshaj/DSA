#include <iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bred;
};

int area(struct Rectangle r)
{
    return r.len * r.bred;
}
int main()
{
    struct Rectangle r = {10, 5};
    cout << area(r);
    return 0;
}