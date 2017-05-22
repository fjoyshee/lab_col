//given an alphabet print the alphabet in upper case
#include <iostream>
using namespace std;
int main()
{
   char ch;
   cin>>ch;
   if (ch>='a'){
   ch=ch-32;
   }
   cout<<ch;
}
