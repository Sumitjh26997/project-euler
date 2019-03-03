#include<iostream>
using namespace std;

bool checkLeap(int year){
    return(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int main(){
    int year = 1901;
    int day = 2; // 1st Jan 1901 is a Tuesday
    int sundayCount = 0;

    while(year != 2001)
    {
        for(int month = 1; month<=12; month++){
            if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
                day = (day + (31%7)) % 7;
            }

            else if(month == 4 || month == 6 || month == 9 || month == 11){
                day = (day + (30%7)) % 7;
            }

            else{
                if(checkLeap(year) == true)
                    day = (day + (29%7)) % 7;
                else
                    day = (day + (28%7)) % 7;
            }

            if(day == 0)
                sundayCount++;
        }
        year++;
    } 

    cout<<sundayCount;
    return 0;
}