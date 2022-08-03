#include<iostream>
using namespace std;

class shape
{
public:
    double base;
    double height;

    shape(double base, double height)
    {
        this->base=base;
        this->height=height;
    }
    virtual double area()
    {
        return 0;
    }
 
    
};

class Triangle : public shape
{
public:
    Triangle(double base, double height)
    : shape(base,height)
    {

    }
    double area()
    {
        return .5 *base *height;
    }

};

class Rectangle : public shape
{
public:
    Rectangle(double base, double height)
    : shape(base,height)
    {

    }
    double area()
    {
        return base*height;
    }

};





int main()
{
    shape *s;
    Rectangle r(4,5);
    Triangle t(2.5,6);

    
    s= &r;
    cout<<"Reactangle Area: "<<s->area()<<endl;
    
    s= &t;
    cout<<"Triangle Area: "<<s->area();
}