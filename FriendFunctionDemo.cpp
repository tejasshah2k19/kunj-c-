#include<iostream>
using namespace std ;

class B; //forward declaration 


class A{
    int x;
    public:
        void setX(int tmp){
            x = tmp;
        }

        int getX(){
            return x; 
        }

        friend void add(A,B);
};

class B{
    int y; 
    public :
        void setY(int tmp){
            y = tmp;
        }

        int getY(){
            return y;
        }
        friend void add(A,B);

};

void add(A obja,B objb){

    cout<<obja.getX() + objb.getY(); 

}

int main(){

    A obja;
    B objb; 

    obja.setX(10);
    objb.setY(20);

    add(obja,objb);

    return 0; 
}