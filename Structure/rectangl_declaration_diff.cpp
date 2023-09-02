#include <iostream>
using namespace std;

struct rectangle
{
    int len;
    int bred;
    char x;
};
struct rectangle r;
int main()
{
    cout << sizeof(r) << endl; // size 12 but char size is 1 it usees only 1 byte as it takes nearest to max byte
    r.len = 15;
    r.bred = 10;
    cout << "Area: " << r.len * r.bred;
    return 0;
}