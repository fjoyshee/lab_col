#include <iostream>
using namespace std;
int main()
{
    char h;
    cin>>h;
    if (h>='0'&& h<='0')
    {
        cout<<h;
    }

else if (h>='A'&& h<='F')
{
    cout<<(h-'A'+10);

}
else if (h='a'&&h<='f')
{
    cout<<(h-'a'+10);
}
}
