#include<iostream>
using namespace std;

//dec to bin
int main(){
    int dec,bin[32],n=0;
    cin>>dec;
    while(dec!=0){
        bin[n]=dec%2;
        n=n+1;
        dec=dec/2;
    }
    for(int i=n-1; i>=0; i--){
        cout<<bin[i];
    }
}
//keep taking valid integers
/*int main(){
    int arr[100],n=0,a;
    cin>>a;
    while(a>0){
        arr[n]=a;
        n=n+1;
        cin>>a;
    }
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}*/
//physically reverse an array
/*int main(){
    int n, arr[100],tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
        tmp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=tmp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}*/
//print all integers greater than avg
/*int main(){
    int n, arr[100];
    double avg=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        avg=avg+arr[i];
    }
    avg=avg/n;
    for(int i=0; i<n; i++){
        if(arr[i]>avg){
            cout<<arr[i]<<" ";
        }
    }
}*/
