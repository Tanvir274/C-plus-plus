#include<iostream>
#include <cstdlib>
#include<cmath>

using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3,A;

    cout<<"Enter first Coordinate (X1,Y1) :";
    cin>>x1>>y1;

    cout<<"Enter Second Coordinate (X2,Y2) :";
    cin>>x2>>y2;

    cout<<"Enter Thired Coordinate (X3,Y3) :";
    cin>>x3>>y3;

    A=0.5*(x1*y2+x2*y3+x3*y1- x1*y3-x2*y1-x3*y2);
     A =  abs(A);

    cout<<"Area :"<< A ;


}