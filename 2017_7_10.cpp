#include<iostream>
using namespace std;
//matrix negation
int main(){
    int r,c,a[50][50],b[50][50];
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            b[i][j]=-a[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
}
//print a row
/*int main(){
    int r,c,x[50][50],p;
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>x[i][j];
        }
    }
    cin>>p;
    for(int i=0; i<c; i++){
        cout<<x[p-1][i]<<" ";
    }
}*/
//is symmetric
/*int main(){
    int n,x[50][50],issym=1;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>x[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(x[i][j]!=x[j][i]){
                issym=0;
                break;
            }
        }
        if(issym==0) break;
    }
    if(issym==1){cout<<"Yes";}
    else {cout<<"No";}
}*/
//store in row major, print in column major order
/*int main(){
    int r,c,x[50][50];
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>x[i][j];
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<x[j][i]<<" ";
        }
        cout<<"\n";
    }
}*/
//store and print in row major order
/*int main(){
    int r,c,x[50][50];
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>x[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<"\n";
    }
}*/

//K-th integer from a list of integers
/*int main(){
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
}*/
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
