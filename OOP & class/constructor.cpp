#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int len;
    int bred;

public:
    Rectangle(int l, int b)
    {
        len = l;
        bred = b;
    }
    int area()
    {
        return len * bred;
    }
    int perimeter()
    {
        return 2 * (len + bred);
    }
};
int main()
{
    int l, b;
    printf("Enter length and breadth\n");
    cin >> l >> b;
    Rectangle r(l, b);
    int a = r.area();
    int p = r.perimeter();
    cout << "area: " << a << endl;
    printf("Perimeter: %d\n", p);
    return 0;
}