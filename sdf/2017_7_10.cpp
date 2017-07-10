#include<iostream>
using namespace std;
//K-th integer from a list of integers
int main(){
    int n, x[100],tmp,k,c=0,pos=-1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    cin>>k;
    for(int i=1,j; i<n; i++){
        tmp=x[i];
        j=i-1;
        while(j>=0&&x[j]>tmp){
            x[j+1]=x[j];
            j=j-1;

        }
        x[j+1]=tmp;
    }
    for(int i=0,j; i<n; i=j){
        c=c+1;
        j=i+1;
        while(j<n&&x[i]==x[j]){
            j=j+1;
        }
        if(c==k){
            pos=i;
            break;
        }
    }
    if(pos!=-1){cout<<x[pos];}
    else {cout<<"None";}
}
//K-th integer from a set of integers
/*int main(){
    int n, x[100],tmp,k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    cin>>k;
    for(int i=1,j; i<n; i++){
        tmp=x[i];
        j=i-1;
        while(j>=0&&x[j]>tmp){
            x[j+1]=x[j];
            j=j-1;

        }
        x[j+1]=tmp;
    }
    cout<<x[k-1];
}*/
//Median
/*int main(){
    int n, x[100],tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=1,j; i<n; i++){
        tmp=x[i];
        j=i-1;
        while(j>=0&&x[j]>tmp){
            x[j+1]=x[j];
            j=j-1;

        }
        x[j+1]=tmp;
    }
    if(n%2!=0){cout<<x[n/2];}
    else {cout<<x[n/2-1]<<" "<<x[n/2];}
}*/
//Insertion sort
/*int main(){
    int n, x[100],tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=1,j; i<n; i++){
        tmp=x[i];
        j=i-1;
        while(j>=0&&x[j]>tmp){
            x[j+1]=x[j];
            j=j-1;

        }
        x[j+1]=tmp;
    }
    for(int i=0; i<n; i++){
        cout<<x[i]<<" ";
    }
}*/
