#include<iostream>
using namespace std;

class car //parent class
{
    public:
    string name;
    string colour;
    int price;

    void display()
    {
        cout<<"Car Name: "<<name<<endl;
        cout<<"Car Colour: "<<colour<<endl;
        cout<<"Car Price: "<<price<<endl;

    }


};
class Honda : public car    //chiled class
{
public:
      string model;

      Honda(string model,string name,string colour,int price)
      {
          this->model=model;
          this->name=name;
          this->colour=colour;
          this->price=price;
      }
      void print()
      {
          cout<<".............Brand : Honda...........";
          cout<<endl<<"Car Model: "<<model<<endl;
          display();
      }
    
};

class Toyota : public car
{
public:
      string model;

      Toyota(string model,string name,string colour,int price)
      {
          this->model=model;
          this->name=name;
          this->colour=colour;
          this->price=price;
      }
      void print()
      {
          cout<<".............Brand : Toyota...........";
          cout<<endl<<"Car Model: "<<model<<endl;
          display();
      }
    
};

// Here one parent class use two chiled class this called hierarchical inheritance



int main()
{
    Honda h1("Hybrid 01","Honda Accord","White",5500000);
    h1.print();

    Toyota t1("Hybrid 11","Toyota Prius","Red",3000000);
    t1.print();

}