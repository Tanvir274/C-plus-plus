#include <iostream>
using namespace std;
class student // Encapsulation
{
private:
    int id;
    string name;

public:
    void SetValue(int i, string n)
    {
        id = i;
        name = n;
    }
    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    student s1;

    s1.SetValue(10, "Tanvir");

    cout << s1.getId() << " " << s1.getName();
}