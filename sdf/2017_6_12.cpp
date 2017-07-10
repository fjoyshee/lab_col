#include<iostream>
using namespace std;

//Hollow inverted Pyramid
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i-1; j>0; j--){
            cout<<" ";
        }
        for(int j=2*n-1-2*(i-1); j>0; j--){
            if(j==2*n-1-2*(i-1)||j==1||i==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
//Inverted Pyramid
/*int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i-1; j>0; j--){
            cout<<" ";
        }
        for(int j=2*n-1-2*(i-1); j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}*/
//Hollow Pyramid
/*int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        for(int j=2*i-1; j>0; j--){
            if(j==2*i-1||j==1||i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}*/
//Pyramid
/*int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        for(int j=2*i-1; j>0; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}*/
