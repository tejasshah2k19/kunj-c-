#include <iostream>

using namespace std;

class P
{
public:
    void add()
    {
        cout << "add::parent";
    }
};

class C : public P
{
public:
    void add()
    {
        P::add();//scope resolution operator //super 
        cout << "add::child";
    }
};
int main()
{
    C objc;

    objc.add();
}