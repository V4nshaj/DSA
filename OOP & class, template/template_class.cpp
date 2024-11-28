#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{ // write this method as well as method in notebook after function prototype
private:
    T a, b;

public:
    Arithmetic<T>(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add()
    {
        T c;
        c = a + b;
        return c;
    }

    T sub()
    {
        T c;
        c = a - b;
        return c;
    }
};

int main()
{
    Arithmetic<int> obj(10, 5), obj1(20, 10);
    cout << "Addition: " << obj.add() << endl;
    cout << "Substraction: " << obj1.sub() << endl;
    Arithmetic<float> obj2(10.5, 5.4);
    cout << "Addition: " << obj2.add() << endl;
    cout << "Substraction: " << obj2.sub() << endl;
    return 0;
}