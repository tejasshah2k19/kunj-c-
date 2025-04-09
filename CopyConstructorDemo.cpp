#include<iostream>

using namespace std;  

class Account{

    int balance;
    
    public: 
        Account(){
            balance = 10000;
        }
        Account(int bal){
            balance = bal; 
        }
        Account(Account *obj){
            balance =  obj->balance;
        }

        void display(){
            cout<<endl<<balance;
        }
};

int main(){

    Account a1; //10000 
    Account a2(15000); //15000
    Account a3(a2);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}