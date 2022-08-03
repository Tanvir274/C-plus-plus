#include<iostream>
using namespace std;

class Main
{
    private:
    
        int id;
        string name;

        

    public:
        Main(int id,string name)
        {
            this->id=id;
            this->name=name;
        }
    
        friend class connect;

    

};

class connect
{
    public:


    void display(Main a)
    {
        cout<<"Id: "<<a.id<<endl;
        cout<<"Name: "<<a.name<<endl;
    }
         

};


int main()
{
    Main m(101,"Tanvir");
    connect c;
    c.display(m);



}