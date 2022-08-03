#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout<<"Enter Coordinate (x,y): ";
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"1st Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"2nd Quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"3rd Quadrant";
    }
    else{
        cout<<"4th Quadrant";

    }

}