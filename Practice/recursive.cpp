#include<iostream>
using namespace std;


int recursive(int i)
{
    
    if(i==1)
    {
        return 1;
    }
    else
    {
        return i*recursive(i-1) ;
        
    }
        
}

int main()
{
    int n;
    cout<<"Factorial calculation , Enter the number :";
    cin>>n;
    int res=recursive(n);
    cout<<"factorial : "<<res;
}