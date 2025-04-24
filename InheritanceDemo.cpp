#include<iostream>

using namespace std; 

class BasicCalc{
    int a;
    int b;
    int ans; 
    public:
        void getData(){
            cout<<"Enter Two numbers ";
            cin>>a>>b;
        }
        void add(){
            ans = a+b;
            cout<<"Add  = "<<ans; 
        }
};

class SciCalc : public BasicCalc{
    float x,y;
    float ans;
    private: 
        //copy 
    
    public: 
        void input(){
            cout<<"Enter two values";
            cin>>x>>y; 
        }

        void sqr(){
            cout<<x*x;
            cout<<endl<<y*y;
        }
   
};

int main(){

    // BasicCalc b; 
    // b.getData();
    // b.add();

    // SciCalc s;
    // s.input();
    // s.sqr();

    SciCalc s; 
    s.getData();
    s.add();

    s.input();
    s.sqr();
    return 0; 
}