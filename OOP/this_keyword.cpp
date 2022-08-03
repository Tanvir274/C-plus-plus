#include<iostream>
using namespace std;

class car
{
 public:
       string name;
       int price;

       car(string name,int price)
       {
           this->name=name;
           this->price=price;
       }
       void display()
       {
           cout<<"Name :"<<name<<endl;
           cout<<"price: "<<price;
       }
         
};

int main()
{
    car c1("Honda Civic",2500000);
    c1.display();

}