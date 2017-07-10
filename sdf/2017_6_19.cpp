#include<iostream>
#include<cmath>
using namespace std;
//print integers which divide p
int main(){
    int n, arr[100],p;
    double avg=0,sd=0;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cin>>p;
    for(int i=0; i<n; i++){
        if(p%arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
}
//avg of n integers
/*int main(){
    int n, arr[100];
    double avg=0,sd=0;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        avg=avg+arr[i];
    }
    avg=avg/n;
    for(int i=0; i<n;i++){
        sd=sd+(arr[i]-avg)*(arr[i]-avg);
    }
    sd=sqrt(sd/n);
    cout<<sd;
}*/
//tweak array elements
/*int main(){
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=arr[i]+10;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}*/
//array reverse output
/*int main(){
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}*/
//array i/o
/*int main(){
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/
