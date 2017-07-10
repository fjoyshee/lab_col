#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=17;
    char txt[]={'$','$','$','k','a','r','a','b','u',
            'M',' ','d','i','E','$','$','$'};
    for(int i=n-1; i>=0; i--){
        cout<<txt[i];
    }

}
//dec to hex
/*int main(){
    int dec,n=0;
    char hex[8];
    cin>>dec;
    while(dec!=0){
        if(dec%16<10){
            hex[n]=(dec%16+'0');
        }
        else{
            hex[n]=(dec%16+'A'-10);
        }
        n=n+1;
        dec=dec/16;
    }
    for(int i=n-1; i>=0; i--){
        cout<<hex[i];
    }
}*/
//hex to bin
/*int main(){
    int n,dec=0,s=0;
    char hex[8],bin[32];
    cin>>n;
    for(int i=n-1; i>=0; i--){
        cin>>hex[i];
    }
    for(int i=n-1; i>=0; i--){
        if(hex[i]>='0'&&hex[i]<='9'){
            dec=dec+(hex[i]-'0')*pow(16,i);
        }
        else if(hex[i]>='a'&&hex[i]<='f'){
            dec=dec+(hex[i]-'a'+10)*pow(16,i);
        }
        else if(hex[i]>='A'&&hex[i]<='F'){
            dec=dec+(hex[i]-'A'+10)*pow(16,i);
        }
    }
    while(dec!=0){
        bin[s]=(dec%2+'0');
        s=s+1;
        dec=dec/2;
    }
    for(int i=s-1; i>=0; i--){
        cout<<bin[i];
    }
}*/
//2n integers, split alternatively
/*int main(){
    int n, a[100],b[100],c[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++){
        c[i]=a[i]+b[i];
    }
    for(int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
}*/
//2n integers, split n-n
/*int main(){
    int n, a[100],b[100],c[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        c[i]=a[i]+b[i];
    }
    for(int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
}*/
