
//# Given integer n,n>0,print whethr n can be written as 2^p*3^0,p,q>=0.Output as yes or no

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
cin>>n;
while(n%2==0)
{
    n=n/2;
}
while(n%3==0)
{
     n=n/3;
}
if(n==1)
{
    cout<<"Yes";
}
else
    cout<<"No";
}
*/
//--------------------------------
//# Given integer n,n>0,print whethr n can be written as 2^p*3^q,p,q>=0.Output as yes or no

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
cin>>n;
while(n%5==0)
{
    n=n/5;
}
while(n%3==0)
{
     n=n/3;
}
if(n==2)
{
    cout<<"Yes";
}
else
    cout<<"No";
}
*/

//--------------------------------
//# Given number|x|<1,and integer n,n>0,print sum of the following series upto n terms;1+x+X^2+x^3+x^4+....+INF
/*
#include <iostream>
using namespace std;
int main()
{
    double x,sum=1,term=1;
    int n;
    cin>>x>>n;
    for(int i=1;i<n;i++)
    {
        term=term*x;
        sum=sum+term;
    }
    cout<<sum+term;

    cout<<sum;
}
*/
//- - - - - -
//some change
//1-x^2/2!+x^4/4!-x^6/6!....INF
/*
#include <iostream>
using namespace std;
int main()
{
    double x,sum=1,term=1;
    int n;
    cin>>x>>n;
    for(int i=1;i<2*n;i+=2)
    {
        term=term*x*x/(i*(i+1))*(-1);
        sum=sum+term;
    }
    cout<<sum+term;

    cout<<sum;
}
*/
