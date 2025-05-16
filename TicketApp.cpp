#include <iostream>
using namespace std;

class Tickets
{
    int totalDiamondTkt;
    int totalSilverTkt;
    int totalGoldTkt;

public:
    Tickets()
    {
        totalDiamondTkt = 20;
        totalGoldTkt = 20;
        totalSilverTkt = 20;
    }
    void setTotalSilverTkt(int s){
        totalSilverTkt = s;
    }
    int getTotalSilverTkt(){
        return totalSilverTkt;
    }

};

class User
{
    int mobileNum;
    int goldTkt;
    int silverTkt;
    int diamondTkt;

public:
    void setMobileNum(int m)
    {
        mobileNum = m;
    }
    int getMobileNum(){
        return mobileNum; 
    }
    void setGoldTkt(int g)
    {
        goldTkt = g;
    }
    int getGoldTkt(){
        return goldTkt;
    }
    void setSilverTkt(int s)
    {
        silverTkt = s;
    }
    int getSilverTkt()
    {
        return silverTkt; 
    }
    void setDiamondTkt(int d)
    {
        diamondTkt = d;
    }
    int getGoldTkt(){
        return goldTkt;
    }

    void bookTicket()
    {
        cout << "how many Gold Tickets you want to buy?";
        cin >> goldTkt;
        cout << "how many Silver Tickets you want to buy?";
        cin >> silverTkt;
        cout << "how many Diamond Tickets you want to buy?";
        cin >> diamondTkt;
         
    }
};

int main()
{
    User u;
    Tickets t; //20 20 20 
    
    u.setMobileNum(85296374);
 
    u.bookTicket();
    t.setTotalSilverTkt(t.getTotalSilverTkt() - u.getSilverTkt());


 
    return 0;
}