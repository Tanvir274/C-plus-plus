#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,S,A1;

    cout<<"Enter 1st,2nd,3rd Arm :";
    cin>>a>>b>>c;

    S=(a+b+c)/2;


    A1=S*((S-a)+(S-b)+(S-c));

    A1=sqrt(A1);

    cout<<"Traiangle Area is: "<<A1;




}