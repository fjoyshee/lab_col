//15.5.17 9#number from digits
#include <iostream>
using namespace std;
int main()
{
  int d1,d2,d3,n,rn,s;
  cin>>d3>>d2>>d1;
  n=d3*100+d2*10+d1;
  rn=d1*100+d2*10+d3;
  s=n+rn;
  cout<<n<<""<<rn<<""<<s;
  return 0;

}
