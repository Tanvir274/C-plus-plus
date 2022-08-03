#include <iostream>
using namespace std;

class vehicle
{

public:
    void about()
    {
        cout << "Vehicle Brand" << endl;
    }
    virtual void brand() = 0;
};

class Toyota : public vehicle
{

public:
    void brand()
    {
        cout << "..........Toyota brand............" << endl;
    }
};

class Honda : public vehicle
{

public:
    void brand()
    {
        cout << "..........Honda brand............" << endl;
    }
};

int main()
{
    vehicle *v;

    Toyota t;
    v = &t;
    v->about();
    v->brand();

    Honda h;
    v = &h;
    v->brand();
}