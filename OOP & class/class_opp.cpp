#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int len;
    int bred;

public:
    void init(int l, int b)
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
    Rectangle r;
    int l, b;
    printf("Enter length and breadth\n");
    cin >> l >> b;
    r.init(l, b);
    int a = r.area();
    int p = r.perimeter();
    cout << "area: " << a << endl;
    printf("Perimeter: %d\n", p);
    return 0;
}