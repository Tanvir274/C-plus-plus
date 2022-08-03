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

    
    car(int x,int y,string z)//Constructor Special type of function && peramiterise constructor
    {
        id=x;
        number=y;
        colour=z;

    };
    ~car()//Destruct is called always end of the program
    {
        cout<<endl<<"Destructor"<<endl;

    };
    car()
    {
        cout<<"Default Constructor"<<endl;
    };

};

int main()
{
    //car de;

    car Lambergini(11,30645,"Black");
    Lambergini.Display();

}