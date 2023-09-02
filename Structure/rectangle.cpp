#include <iostream>
using namespace std;

struct rectangle
{
    int len;
    int bred;
};

int main()
{
    struct rectangle r = {10, 5}; /// initial declration
    r.len = 15;
    r.bred = 10;
    cout << sizeof(r) << endl;
    cout << "Area: " << r.len * r.bred;
    return 0;
}