#include <iostream>

using namespace std;
class Emp
{

    int salary;
    int bonus;
    int hra;

public:
    void getSalary()
    {
        cout << "Enter salary - bonus - hra";
        cin >> salary;
        cin >> bonus;
        cin >> hra;
    }

    Emp operator+(Emp o2)
    {
        Emp obj;
        obj.salary = salary + o2.salary;
        obj.bonus = bonus + o2.bonus;
        obj.hra = hra + o2.hra;

        return obj;
    }

    void printData()
    {
        cout << "\nSalary : " << salary;
        cout << "\nbonus  : " << bonus;
        cout << "\nhra    : " << hra;
    }
};
int main()
{

    Emp ram;
    Emp laxman;

    ram.getSalary();
    laxman.getSalary();

    Emp ramLaxman = ram + laxman;

    ramLaxman.printData();

    return 0;
}