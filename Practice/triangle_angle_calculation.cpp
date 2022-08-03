#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    double a,b,c,A1,B1,C1;

    cout<<"Enter 1st,2nd,3rd Arm :";
    cin>>a>>b>>c; 

    A1= acos((pow(b,2)+pow(c,2)-pow(a,2))/2*b*c); // a*a=b*b+c*c-2bccosA

    //A1= acos(0.61); 
    

    B1=asin((b*sin(A1))/a); // SinA/a=sinB/b
    C1=180-A1-B1;
    
    cout<<"Three Angle value is (A,B,C): "<<setprecision(3)<<"A:"<<A1<<" B:"<<B1<<" C:"<<C1;
}