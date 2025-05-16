#include<iostream>
using namespace std;

template  <class T> 

class Calc{
    T x;
    T y;
    public: 
        void add(int a,int b){
            cout<<"add";
        }
        void sub(T a,T b){
            T z;             
        }

};


int main(){

    Calc<int> c ;
    c.add(12,4);

    Calc<float> d;
    return 0; 
}