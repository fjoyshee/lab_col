/*
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<"("<<i<<","<<j<<")";
        }
    }
}
*/
//_---------------------------------------------
/*
#include <iostream>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=2*m-1;j+=2)
        {
            cout<<"("<<i<<","<<j<<")";
        }
    }
}
*/



//_---------------------------------------------
/*
#include <iostream>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=2*m-1;j+=2)
        {
            cout<<"("<<i<<","<<j*(j+1)/2<<")";
        }
    }
}

*/


//_---------------------------------------------


/*
#include <iostream>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"#";
//_---------------------------------------------
        }
         cout<<"\n";
         if(i%n==0)//this line is extra as same 2 solution
         {
             cout<<"\n";
         }
    }

}
*/


//_---------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=1,elem;
    for (int i=1;i<=n;i++)
    {
     for( int j=1;j<=n;j++)
     {
         cin>>elem;
         if(i==j)
         {
             sum=sum+elem;
         }
     }
    }
    cout<<sum;

}


//_---------------------------------------------
//_---------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=1,elem;
    for (int i=1;i<=n;i++)
    {
     for( int j=1;j<=n;j++)
     {
         cin>>elem;
         if(i+j==n+1)
         {
             sum=sum+elem;
         }
     }
    }
    cout<<sum;

}

#include <iostream>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"#";
//_---------------------------------------------
        }
         cout<<"\n";
         if(i%n==0)//this line is extra as same 2 solution
         {
             cout<<"\n";
         }
    }

}
