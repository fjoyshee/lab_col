//15.5.17 10#reversing the number
#include <iostream>
using namespace std;
int main()
{
  int d1,d2,d3,d4,n,rn;
  cin>>n;
  d1=n%10;
  n=n/10;
  d2=n%10;
  n=n/10;
  d3=n%10;
  n=n/10;
  d4=n%10;
  n=n/10;

  rn=d1*1000+d2*100+d3*10+d4;

  cout<<rn;


}
