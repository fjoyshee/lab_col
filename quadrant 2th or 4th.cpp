//given a coordinate (a,b),print whether it falls in the 4th or 2nd quadrant
#include <iostream>
using namespace std;
int main()
{
   double a,b;
   cin>>a>>b;
   if ((a>0&&b<0)||(a<0&&b>0))
    {
    cout<<"Yes";
   }

}
