#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int len;
    int bred;
};
void init(struct Rectangle *r, int l, int b)
{
    r->len = l;
    r->bred = b;
}
int area(struct Rectangle r)
{
    return r.len * r.bred;
}
int perimeter(struct Rectangle r)
{
    return 2 * (r.len + r.bred);
}
int main()
{
    Rectangle r{0, 0};
    int l, b;
    printf("Enter length and breadth\n");
    cin >> l >> b;
    init(&r, l, b);
    int a = area(r);
    int p = perimeter(r);
    cout << "area: " << a << endl;
    printf("Perimeter: %d\n", p);
    return 0;
}