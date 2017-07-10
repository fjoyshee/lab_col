#include<iostream>
using namespace std;
//selection sort
int main(){
    int n, x[100], isfound=0,imin,tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n-1; i++){
        imin=i;
        for(int j=i+1; j<n; j++){
            if(x[j]<x[imin]){
                imin=j;
            }
        }
        if(imin>i){
            tmp=x[i];
            x[i]=x[imin];
            x[imin]=tmp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<x[i]<<" ";
    }
}
//distinct integers
/*int main(){
    int n, x[100], isfound=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(x[i]==x[j]){
                isfound=1;
                break;
            }
        }
        if(isfound==1){
            break;
        }
    }
    if(isfound==1){cout<<"No";}
    else {cout<<"Yes";}
}*/
//A intersection B
/*int main(){
    int n,m,a[100],b[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}*/
//A is subset of B
/*int main(){
    int n,m,a[100],b[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"("<<a[i]<<", "<<b[j]<<") ";
        }
    }
}*/
//A is subset of B
/*int main(){
    int n,m,a[100],b[100],c=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                c=c+1;
                break;
            }
        }
    }
    if(c==n){cout<<"Yes";}
    else{cout<<"No";}
}*/
//p belong to A
/*int main(){
    int n,a[100],p,isfound=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>p;
    for(int i=0; i<n; i++){
        if(a[i]==p){
            isfound=1;
            break;
        }
    }
    if(isfound==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}*/
//median of factors
/*int main(){
    int n,factors[100],c=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            factors[c]=i;
            c=c+1;
        }
    }
    if(c%2!=0){
        cout<<factors[c/2];
    }
    else{
        cout<<factors[c/2-1]<<" "<<factors[c/2];
    }
}*/
//median of even integers from n-integers
/*int main(){
    int n,x[100],even[100],c=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        if(x[i]%2==0){
            even[c]=x[i];
            c=c+1;
        }
    }
    if(c%2!=0){
        cout<<even[c/2];
    }
    else{
        cout<<even[c/2-1]<<" "<<even[c/2];
    }
}*/
