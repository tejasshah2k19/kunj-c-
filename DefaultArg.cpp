#include<iostream>

using namespace std;

void add(int a=10,int b=10){
    cout<<endl<<a+b;
}

void sub(int x,int y,int a=10,int b=10){
    cout<<endl<<a+b;
}


int main(){

    add(1,2);
    add();//here it will use default argument 
    add(200);
    return 0;
}