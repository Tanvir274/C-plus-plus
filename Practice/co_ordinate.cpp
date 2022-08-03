#include<iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,d , r;

    cout<<"First Co-Ordinate(A B) :";
    cin>>a>>b;

    cout<<"Second Co-Ordinate(C D) :";
    cin>>c>>d;

    r=sqrt(pow(c-a,2)+pow(d-b,2));

    cout << "2 D co-ordinate Result: " << setprecision(3) << r << endl;
}