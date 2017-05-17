//12#
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a,b,c,d,x1,x2;
  cin>>a>>b>>c;
d=sqrt(b*b-4*a*c);
x1=(-b+d)/(2*a);
x2=(-b-d)/(2*a);
cout<<x1<<x2;

}
