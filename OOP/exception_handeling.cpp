#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter Second number: ";
    cin>>b;
    

    try
    {
        if(b==0)
        {
            throw -1;
        }
       
        
        double result=(double)a/b;
        cout<<endl<<"Result:"<<result<<endl;
    }
    catch(int a)  //N.B ... can use for any type throw return;
    {
        cout<<"Divide by 0 not possible"<<endl;
        
    }
    
    return main();
}