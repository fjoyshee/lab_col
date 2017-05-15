//15.5.17 4#
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,area;
    cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
    area=(x1*y2+x2*y3+x3*y4+x4*y1);
    area=area-(y1*x2+y2*x3+y3*x4+y4*x1);
    area=area/2;
    cin>>area;
    return 0;
}
