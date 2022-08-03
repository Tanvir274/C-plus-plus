#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter First input(0/1) :";
    cin>>a;
    cout<<"Enter Second Input(0/1) :";
    cin>>b;

    cout<<endl<<"bitwise and :"<<(a & b);
    cout<<endl<<"bitwise or  :"<<(a | b);
    cout<<endl<<"bitwise xor  :"<<(a ^ b);
    cout<<endl<<"First Input bitwise 1s complement  :"<<(~a)<<endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;



}