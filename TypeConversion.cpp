#include <iostream>

using namespace std;

class Time
{
    int hour;
    int minutes;
    int seconds;

public:
    Time(int duration)
    {
        hour = duration / 60;
        minutes = duration % 60;
        seconds = 0;
    }
    void printData()
    {
        cout << "Hour : " << hour;
        cout << endl
             << "Minutes : " << minutes;
        cout << endl
             << "Seconds : " << seconds;
    }
};

class KM
{
    int distance; // 2 5 6
public:

    KM(int dis){
        distance = dis;
    }
    void printData()
    {
        cout << "\nKM : " << distance;
    }
    int getDistance(){
        return distance;
    }
};

class MTR
{

    int distance; // 2000 5000 6000
public:
    void printData()
    {
        cout << "\nMTR : " << distance;
    }
    MTR(KM k){
        distance = k.getDistance() * 1000; 
    }
};

int main()
{

    // type conversion
    // class <= basic

    Time t = 175; // 175 minutes , 2:55:0
    int x = 175;

    t.printData();

    KM k = 5; 
    k.printData();

    MTR m = k; //class <= class 
    m.printData();

    return 0;
}
