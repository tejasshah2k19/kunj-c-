#include <iostream>

using namespace std;

class Person
{
public:
    inline void greet()
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << "Welcome";
        }
    }
    // loop switch goto recursion
    void quite(); // declaration
    void stop();
};

inline void Person::quite()
{
}

void Person::stop(){
}

int main()
{ // XX
    Person p;
    p.greet(); //
    return 0;
}