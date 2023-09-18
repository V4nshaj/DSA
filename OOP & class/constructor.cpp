#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int len;
    int bred;

public:
    Rectangle()
    { // default constructor
        len = 0;
        bred = 0;
    }
    Rectangle(int l, int b) // construcor overload
    {
        len = l;
        bred = b;
    }
    int area() // facilitator
    {
        return len * bred;
    }
    int perimeter() // facilitator
    {
        return 2 * (len + bred);
    }
    void setlen(int l) // Mutator
    {
        len = l;
    }
    void setbred(int b) // Mutator
    {
        bred = b;
    }
    int getLen() // Accessor
    {
        return len;
    }
    int bred() // Accessor
    {
        return bred;
    }
    ~Rectangle() // Destructor
    {
        cout << "Destructor" << endl;
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