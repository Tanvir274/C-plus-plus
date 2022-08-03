#include<iostream>
//#include<string>
using namespace std;

class car 
{
  public:
    int id;
    int number;
    string colour;
    void Display()
    {
        cout<<endl<<id<<" "<<number<<" "<<colour;
    }

    void setValue(int x,int y,string z)
    {
        id=x;
        number=y;
        colour=z;

        cout<<endl<<id<<" "<<number<<" "<<colour;
    }
    /*car(int x,int y,string z)//Constructor Special type of function
    {
        id=x;
        number=y;
        colour=z;

    }*/

};

int main()
{
    car Honda,Toyota, BMW,Lambergini;

    Honda.id=01;
    Honda.number=1012;
    Honda.colour="Black";

    cout<<Honda.id<<" "<<Honda.number<<" "<<Honda.colour;

    Toyota.id=5;
    Toyota.number=1231;
    Toyota.colour="Red";
    Toyota.Display();

    BMW.setValue(10,3031,"Black");

    /*Lambergini(11,30645,"Black");
    Lambergini.Display();*/

}