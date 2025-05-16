#include<iostream>
#include<string>
#include<string.h>
using namespace std; 

class Stock{

};

class User{
    string email; 
    string password;
    string firstName;
    string role; 

    public:
        void signup(){
            //all input 
        }

        string getRole(){
            return role;
        }
        int login(string inputEmail,string inputPassword){
            if( inputEmail == email){
                return 1;
            }else{
                return 0;
            }
        }
};

int main(){
 
    Stock s[10];
    int stockCounter=0; 
    User u[10];
    int userCounter=0;
    
    string inputEmail;
    string inputPassword; 

    int currentUser;

    int choice; 

    cout<<"\n1 for Signup\n2 For Login\n3 For Exit";
    cin>>choice;    

    switch (choice)
    {
    case 1:
        cout<<"\nNEW USER ENROLLMENT :";
        u[userCounter].signup();
        userCounter++;
        break;
    case 2:
        cout<<"\nEnter email and password";
        cin>>inputEmail;
        cin>>inputPassword; 
        
        currentUser = -1;
        for(int i=0;i<userCounter;i++){
            if(u[i].login(inputEmail,inputPassword)==1){
                currentUser = i;
                break;
            }
        }

        if(currentUser == -1){
            cout<<"\nInvalid Credentials!!!";
        }else{
            if(u[currentUser].getRole() == "ADMIN"){
                //admin menu
            }else{
                //user menu
            }
        }

    default:
        break;
    }
    return 0;
}