#include <iostream>
using namespace std;

struct rectangle
{
    int len;
    int bred;
} r1, r2;
int main()
{

    r1.len = 15;
    r1.bred = 10;
    cout << "Area: " << r1.len * r1.bred;
    return 0;
}