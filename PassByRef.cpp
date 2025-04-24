#include <iostream>
using namespace std;

void change(int k)
{
    k = k * 10;
}

void change2(int *p)
{
    *p = *p * 10;
}

class AB
{

public:
    int age;
    void sqr(AB x)
    {
        x.age = 100; 
    }

    void sqr2(AB *x)
    {
        x->age = 100; 
    }
};

int main()
{

    // int x;
    // x = 10;
    // change(x); // pass by value
    // cout << x;

    // change2(&x); // pass by ref
    // cout << x;
    AB obj;
    obj.age = 10;
    obj.sqr(obj);
    cout<<obj.age;
    return 0;
}