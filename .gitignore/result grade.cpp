//given a number d,0<=d<=100,Count the number into letter grade.The grading system is as following.
#include <iostream>
using namespace std;
int main()
{
    double d;
    cin>>d;
    if (d>85){
        cout<<"A";
    }
    else if (d>60){
        cout<<"B";

    }
    else if (d>50){
        cout<<"C";
    }
    else{
        cout<<"D";
    }
}


