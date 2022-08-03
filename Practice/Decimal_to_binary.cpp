#include<iostream>
using namespace std;

int main()
{
    int i=0, d, res=0, arr[20];

    cout<<"Enter decimal number: ";
    cin>>d;

    while(d>=1)
    {
        
        res=d%2;
        arr[i]=res;
        d=d/2;
        i++;

    }
    i--;
    cout<<endl<<"Binary : ";
    while(i>=0)
    {
        cout<<arr[i];
        i--;

    }
    cout<<endl;

    return main();


}