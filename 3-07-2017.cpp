#include <iostream>
using namespace std;

//given n sorted integers, print median(s) of the even integers
/*int main (){

int n,x[100],even[100],c=0;
cin>>n;
for(int i=0; i<n; i++){
    cin>>x[i];
}
for(int i=0; i<n; i++){
    if(x[i]%2==0){
        even[c]=x[i];
        c+=1;
    }
}
if(c%2!=0){
    cout<<even[c/2];
}
else{
    cout<<even[c/2-1]<<" "<<even[c/2];
}
}*/

//given a positive integer n, print median(s) of the factors of n
/*int main(){

int n,factors[100],c=0;
cin>>n;
for(int i=1; i<=n; i++){
    if(n%i==0){
        factors[c]=i;
        c+=1;
    }
}
if(c%2!=0) cout<<factors[c/2];
else cout<<factors[c/2-1]<<" "<<factors[c/2];
}*/

//given a set of n integers A, and another integer P, print whether P belong to A.
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
if(isfound==1) cout<<"Yes";
else cout<<"No";
}*/

//given two sets of n integers A and B, print whether A is subset of B.
/*
int main(){

int m,n,a[100],b[100],i=0,c=0;
cin>>n;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cin>>m;
for (int j=0;j<m;j++){
    cin>>b[i];
    if (a[i]==b[j]){
     c=c+1;
     break;
    }
}
}
if(c==0){cout<<"Yes";}
    else{cout<<"No";}
*/


////given two sets of n integers A and B, print A X B.

//n=3;A={10,-5,20}
//n=4;B={2,10,-9,4}
//A X B=(10,2).......
//algo
// 1) take n
// 2) take a{[0,...n-1]
// 3) take m
// 4) take b[o,....m-1]
// 5) i=0
// 5) whilei<n do
// j=0
// while j<n do
// print (a[i],b[j])
// j=j+1

/*
int main(){

int m,n,a[100],b[100];
cin>>n;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cin>>m;
for (int j=0;j<m;j++){
    cin>>b[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"("<<a[i]<<", "<<b[j]<<", ";

    }
}
*/


////given two sets of n integers A and B, print A intersection B.

//A={2,3,4}
//b={2,4,5,8}
//A in B{2,4}

//take n
//take a[0,....n-1]
//take m
//take b0,...m-1]
//i=0
//while i<n do
// j=0
//while j<m do
//* j=j+1
   // * part
   //if a[i]==b[j] then
   //print a[i]
   //break



/*
int main(){

int m,n,a[100],b[100];
cin>>n;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cin>>m;
for (int j=0;j<m;j++){
    cin>>b[i];
}
for(int i=0;i<n;i++);
for(int j=0;j<n;j++){
    if (a[i]==b[j]){
        cout<<a[i]<< " ";
        break;
    }
}
]

//// given a list of n integer, print whelther the the integers are district

//r=8
//1,10,15,10,20,30,40,50

// take n
// take x[0,...n-1]
// i=0, isfound==0
//while i<n-1 do
//j=i+1
// while j<n do
// if x[i] ==x[j] then
// sfound=1
//j=j+1
// if sfound==1 then
// print "No"
//else
// print "Yes"



* int main()
{
int n,x[100],isfound=0;
cin>>n;
for(int i=0; i<n ;i++)
{
cin>>x[i];
}

for(int i=0; i<n-1; i++)
{
for(intj=i+1; j<n; j++)
{
if (x[i]==x[j]

{
isfound=1;
}
}
}
if (isfound==1)
{cout<<"No";
}
else {cout<<"Yes";}

//// given a list of n integer, print the integers nnon-decreasing/increasing order

// algo


50|40|20|10|30
//after swaping
10|40|20|50|30

// take n
//take x[0,....n-1]
//i=0
//while i<n-1 do
// imin=i,j=i+1
//while j<n do
//if x[j]<x[imin] then
// imin=j
//j=j+1
//swap a[i],a[imin]
//i+1



* int main()
{
int n,x[100],isfound=0;
cin>>n;
for(int i=0; i<n ;i++)
{
cin>>x[i];
}

for(int i=0; i<n-1; i++)
{imin=i;
for(intj=i+1; j<n; j++)
{
if (x[j]<x[imin]){
    imin=j;
}
}
if(imin>i){
    tmp=x[i];
    x[i]=x[imin];
    x[imin]=tmp;
}
}

for{int i=0;i<n;i++)
    {
    cout<<x[i]<<" ";











