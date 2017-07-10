#include<iostream>
using namespace std;

//common multiples of m, and n up to p
int main(){
    int m,n,p,a;
    cin>>m>>n>>p;
    a=m;
    if(n>m){
        a=n;
    }
    for(int i=a; i<=p; i++){
        if(i%m==0&&i%n==0){
            cout<<i<<" ";
        }
    }
}
//GCD(m,n,p) Euclid
/*int main(){
    int m,n,p,tmp;
    cin>>m>>n>>p;
    while(n!=0){
        tmp=n;
        n=m%n;
        m=tmp;
    }
    n=p;
    while(n!=0){
        tmp=n;
        n=m%n;
        m=tmp;
    }
    cout<<m;
}*/
//GCD(m,n) Euclid
/*int main(){
    int m,n,tmp;
    cin>>m>>n;
    while(n!=0){
        tmp=n;
        n=m%n;
        m=tmp;
    }
    cout<<m;
}*/
//GCD(m,n) naive
/*int main(){
    int m,n,a,gcd;
    cin>>m>>n;
    a=m;
    if(n<m){
        a=n;
    }
    for(int i=1; i<=a; i++){
        if(m%i==0&&n%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}*/
//common divisors of m,n
/*int main(){
    int m,n,a;
    cin>>m>>n;
    a=m;
    if(n<m){
        a=n;
    }
    for(int i=1; i<=a; i++){
        if(m%i==0&&n%i==0){
            cout<<i<<" ";
        }
    }
}*/
