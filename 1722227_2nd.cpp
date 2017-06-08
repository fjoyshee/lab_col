/*Q41
#include <iostream>
using namespace std;

int main () {

    int n;

cin >> n;

if (n>0) {
    cout << "Positive";
}

return 0;
}

/*42
#include <iostream>
using namespace std;

int main () {

    int n;

cin >> n;

if (n>0){
    cout << "Positive";
}
else if (n<0){
    cout << "Negative";
}
else if (n==0){
    cout << "Zero";
}

return 0;
}


/*43
#include <iostream>
using namespace std;

int main () {

    int n;

cin >> n;

if (n>100){
    cout <<n<< " is greater than 100";
}
else if (n<100){
    cout <<n<<  " is less than 100";
}
else if (n==100){
    cout << n << " is equal to 100";
}

return 0;
}

/*44
#include <iostream>
using namespace std;

int main () {

    int n,s;

cin >> n >> s ;

if (n>s){
    cout <<n << " is greater than " << s ;
}
else if (n<s){
    cout <<n<<  " is less than " << s;
}
else if (n==s){
    cout << n << " is equal to "<< s ;
}
return 0;
}

/*45
#include <iostream>
using namespace std;

int main () {

    int n,s;

cin >> n  ;

if (n>=0 && n<90){
    cout << "Acute angle" ;
}
else if (n>90 && n<180){
    cout <<"Obtuse Angle";
}
else if (n==90){
    cout << "Right Angle";
}
else if (n==180) {
    cout << "Straight Angle";
}
else if (n>180 && n<360) {
    cout << "Reflex Angle";
}
else if (n==360){
    cout << "Turn";
}

return 0;
}

/*Q46
#include <iostream>
using namespace std;

int main () {

    int n;

cin >> n  ;

if (n%2==0){
    cout << "It is even" ;
}
else {
    cout << "It is odd";
}
return 0;
}

/*Q48
#include <iostream>
using namespace std;

int main () {

    char n,a;

cin >> a ;

if (a<97){
        n=a+32;
    cout << n ;
}
else {
    cout << a;

}
return 0;
}

/*49
#include <iostream>
using namespace std;

int main () {

    char n,a;

cin >> a ;

if (a<97){
        n=a+32;
    cout << n ;
}
else if (a>=97) {
        n=a-32;
    cout << n;

}
return 0;
}

/*50
#include <iostream>
using namespace std;

int main () {

    char n,a;

cin >> a ;

if (a>='0' && a<='9'){

    cout << "yes" ;
}
else if  (a>='a' && a<='z'){
    cout << "yes";

}
else if (a>='A' && a<='Z'){
    cout << "yes";
}
else {
    cout << "No";
}
return 0;
}

/*51
#include <iostream>
using namespace std;

int main () {

 double h,s;

cin >> h;

if (h>='A' &&  h<='F'){
        h='A'+10;
    cout << h ;
}
else if  (h>='a' &&  h<='f'){
       h= 'a'+10;
    cout << h ;
}
else {
    cout << h;
}
return 0;
}

/*53
#include <iostream>
using namespace std;

int main () {

 int n,a,s,d;

 cin >> n;
 cin >> a;
 cin >> s >> d;
 if (n%a==0 || n%s==0 || n%d==0) {
    cout << "Given integers does contain a factor of " << n ;
 }
 else {
    cout << "Given integers do not contain a factor of " << n ;
 }

return 0;
}

/*54
#include <iostream>
using namespace std;

int main () {

 int n,a,s,d;

 cin >> n;
 cin >> a;
 cin >> s >> d;
 if (n%a==0 || n%s==0 || n%d==0) {
    cout << a <<  " " << s << " " << d << " " <<  "are factors of " << n ;
 }
 else {
    cout << "Divisibility test outcome negative";
 }

return 0;
}

/*Q55
#include <iostream>
using namespace std;

int main () {

 int n,a,s,d;

 cin >> n;
 cin >> a;
 cin >> s ;
 if (n+s<a ) {
    cout << n << "+"<< s << "<" << a;
 }
 else if ( n+a<s) {
    cout << n << "+"<< a<< "<" << s;
 }
 else if (a+s<n) {
    cout << s << "+"<< a<< "<" << n;
 }
 else {
    cout << "One does not weigh more";
 }

return 0;
}

/*Q56
#include <iostream>
#include <cmath>
using namespace std;

int main () {

 double n,a,s,p,area,d;

 cin >> n;
 cin >> a;
 cin >> s ;
 if (n+s>a && n+a>s && a+s>n) {
    p=(n+a+s)/2;
    d=p*(p-n)*(p-a)*(p-s);
    area= sqrt(d) ;
    cout << area;
 }
 else  {
    cout << "Invalid sides for triangle";
 }

return 0;
}

/*57
#include <iostream>
using namespace std;

int main () {

 double x1,y1,x2,y2,m,a;

 cin >> x1;
 cin >> y1;
 cin >> x2 >> y2 ;

m=(y2-y1)/(x2-x1);
if (m>0 || m<0) {

a= m*x1 + y1;

cout << "y=" << m << "x" << "+" << a ;

}
else if  (m=0){
    cout << "y=" <<y1 ;
}
else if (m=1.0/0.0){
    cout << "x=" << x1 ;
}
return 0;

}

/*58
#include <iostream>
using namespace std;

int main () {

 int m1,c1,m2,c2,x,y;

 cin >> m1;
 cin >> c1;
 cin >> m2 >> c2 ;
if (m1==m2 && c1==c2){
    cout << "Same";
}
else if (m1==m2){
    cout << "parallel";
}
else {
    x=(c2-c1)/(m1-m2);
    y=m1*x+c1;
    cout << x <<"," << y ;
}

return 0;

}

/*Q59
#include <iostream>
#include <cmath>
using namespace std;

int main () {

 double a,b,c,d,x1,x2,f,m;

 cin >> a;
 cin >> b;
 cin >> c;

 d=b*b-(4*a*c);

 if (d>0){
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout << x2 << "," << x1;

 }
else if (d==0){
    x1=(-b+sqrt(d))/(2*a);
    cout << x1 ;
}
else if (d<0) {
    f= -b/(2*a);
    m= sqrt(-d)/(2*a);

    cout << f << "+" << m << "i" << "," << f << "-"  << m << "i";
}
return 0;

}
/*60
#include <iostream>
#include <cmath>
using namespace std;

int main () {

 double h,k,a,b,w,r;

 cin >> h;
 cin >> k;
 cin >> a;
 cin >> b;

 w=pow(h-a,2.0)+pow(k-b,2.0);
 r=sqrt(w);

 if  (k==0 && h==0) {
     cout << "X^2+Y^2=" << r << "^2";




 }
 else if (k==0 && h>0) {
     cout << "(X-"<<h<<")^2+(Y^2=" << r << "^2";
 }
 else if (k==0 && h<0) {
     cout << "(X"<<h<<")^2+(Y^2=" << r << "^2";
 }
 else if
 (h==0 && k>0){
    cout << "X^2+(Y-" << k << ")^2=" << r << "^2";
 }
 else if (h==0 && k<0){
     cout << "X^2+(Y" << k << ")^2=" << r << "^2";
 }
 else if (h>0 && k>0){
     cout << "(X-"<<h<<")^2+(Y-" << k << ")^2=" << r << "^2";
 }
 else if (h<0 && k<0){
    cout << "(X"<<h<<")^2+(Y" << k << ")^2=" << r << "^2";
 }
 else if (h>0 && k<0) {
     cout << "(X+"<<h<<")^2+(Y" << k << ")^2=" << r << "^2";
 }
 else if (h<0 && k>0){
     cout << "(X"<<h<<")^2+(Y+" << k << ")^2=" << r << "^2";
 }
return 0;

}

/*61
#include <iostream>
#include <cmath>
using namespace std;

int main () {

 double h,k,a,b,w,r,q;

 cin >> h;
 cin >> k;
 cin >> r;
 cin >> a;
 cin >> b;

 w=pow(h-a,2.0)+pow(k-b,2.0);
 q=sqrt(w);
if (q<r){
    cout << "Inside circle";
}
else if (q>r) {
    cout << "Outside Circle";

}
else if (q==r) {
    cout << "On Circle";
}
return 0;

}

/*Q62
#include <iostream>
using namespace std;

int main () {

 int n1,n2;

 cin >> n1;
 cin >> n2;
if (n1>n2){
    cout << n2 << " " << n1;
}
else {
    cout << n1 << " " << n2;
}

return 0;

}

/*Q63
#include <iostream>
using namespace std;

int main () {

 int number1,number2,number3;

 cin >> number1;
 cin >> number2;
 cin >> number3;
if (number3> number2 && number2>number1 && number3>number1){
		cout <<  number3 << " " << number2 << " " << number1  ;
}
	else if (number2> number3> number1){
		cout <<  number2 << " " << number3 << " " << number1  ;
	}
else 	if (number3>number1 && number1> number2 && number3>number2){
		cout <<  number3 << " " << number1 << " " << number2  ;
	}
else 	if (number1> number3 && number3> number2 && number1 > number2){
		cout << number1 << " " << number3 << " " << number2  ;
	}
else 	if (number1> number2 && number2>number3 && number1>number3){
		cout <<  number1 << " " << number2 << " " << number3 ;
	}
else 	if (number2> number1 && number1> number3 && number2>number3){
		cout <<  number2 << " " << number1 << " " << number3  ;
	}


return 0;

}

/*Q65
#include <iostream>
using namespace std;

int main () {

 int b1,b2,b3,n,q,w;

 cin >> b1;
 cin >> b2;
 cin >> b3;
 cin >> n;

 q=b2-b1;
 w=b3-b2+1;

if (n>0 && n<b1){
    cout << b1;
}
else if (n>b1 && n<b2){
    cout << q;
}
else if (n>b2 && n<b3) {
    cout << w ;

}
else if (n>b3){
    cout << "Greater than first 21 numbers";
}
return 0;

}

/*Q66
#include <iostream>
using namespace std;

int main () {

 int a;
 cin >> a;

 if ((a%4==0 && a%100!=0) || a%400==0){
    cout << "It is  leap year" ;
 }
 else {
    cout << "It is not a leap year" ;
 }
return 0;

}

/*Q67
#include <iostream>
using namespace std;

int main () {

 int n;
 cin >> n;

 if (n>=80) {
    cout << "A";
 }
 else if (n>=70 && n<80){
    cout << "B";
 }
 else if (n>=60 && n<70){
    cout << "C";
 }
 else if (n>=50 && n<60){
    cout << "D";
 }
 else if (n<50){
    cout << "F" ;
 }
return 0;

}

/*Q71
#include <iostream>
using namespace std;
int main () {

int x,y;

cin >> x;
cin >> y;

if (x==0 && y==0) {
    cout << "Origin";
}
else if ((x==0 &&  (y>0 || y<0 ))){
    cout << "Y axis";
}
else if ((y==0 && (x>0 || x<0))){
    cout << "X axis";
}
else if (x>0 && y>0){
    cout << "1st Quadrant";
}
else if (x<0 && y>0){
    cout << "2nd Qudrant";
}
else if (x<0 && y<0){
    cout << "3rd Quadrant";
}
else if (x>0 && y<0){
    cout << "4th Quadrant";
}
return 0;
}


/*Q72
#include <iostream>
using namespace std;
int main () {

int n1,n2,n3,n4,n5,n6,a;

cin >> n1;
cin >> n2 >> n3>>n4>>n5>>n6;

if (n1>=0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n6>=0 ) {

  a=(n1+n2+n3+n4+n5+n6)/6;

    cout << a;
}
else if (n1>=0 && n2<0 && n3>=0 && n4>=0 && n5>=0 && n6>=0) {
    a= (n1+n3+n4+n5+n6)/5;
    cout << a;
}
return 0;
}

/*Q77
#include <iostream>
using namespace std;
int main () {

int a1,a2,a3,b1,b2,b3;

cin >> a1>>a2>>a3>>b1>>b2>>b3;

if ((a1==b1 && a2==b2 && a3==b3) || (a1==b2 && a2==b1 && a3==b3) || (a1==b3 && a2==b2 && a3==b1) || (a1==b1 && a2==b3 && a3==b2)|| (a1==b2 && a2==b1 && a3==b3)) {



    cout << "yes";
}
else {
    cout << "no";
}
return 0;
}

/*Q78
#include <iostream>
using namespace std;
int main () {

char a,b,c,d;

cin >> a;
cin >> b>>c>>d;

if (a<b && b<c && c<d){
    cout << a <<b <<c<<d;
}
else if (a<c && c<b && b<d) {
        cout << a << c << b<<d;

}
return 0;
}

//77

/*
#include <iostream>
using namespace std;
int main()
{
 int a1,a2,a3,b1,b2,b3,A,B;
 cin>>a1>>a2>>a3>>b1>>b2>>b3;
 cout<<"A"<<"("<<a1<<","<<a2<<","<<a3<<")"<<endl;
 cout<<"B"<<"("<<b1<<","<<b2<<","<<b3<<")"<<endl;
  if ((a1+a2>a3 && a1+a3>a2 && a2+a3>a1)&&(b1+b2>b3 && b1+b3>b2 && b2+b3>b1))
 {
  cout<<"Yes"<<endl;
 }
 else
 {
  cout<<"No"<<endl;
 }
}
*/
