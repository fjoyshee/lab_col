// given an integer,representing a year,print whether the year is a leap yeat.
#include <iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if ((y%4==0&&y%100!=0)||(y%400==0))
    {
        cout<<"yes";
    }
}
