//given a integer coordinating 5 disgits,reverse the integer
#include <iostream>
using namespace std;
int main()
{
  int d1,d2,d3,d4,d5,n,rn;
  cin>>n;
  d1=n%10;
  n=n/10;
  d2=n%10;
  n=n/10;
  d3=n%10;
  n=n/10;
  d4=n%10;
  n=n/10;
  d5=n%10;
  n=n/10;

rn=d1*10000+d2*1000+d3*100+d4*10+d5;
cout<<rn;

}
