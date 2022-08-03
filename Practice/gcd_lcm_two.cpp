#include<iostream>
using namespace  std;
int main()
{
    int a,b,c=1;
    cout<<"Enter Input: ";
    cin>>a>>b;
    //for LCM
    int a1=a,b1=b;

    if(a==b && a!=0 && b!=0)
    {
      cout<<"GCD: "<<b<<endl;
      cout<<"LCM: "<<b<<endl;
    }
    else if(a>b && a>0 && b>0)
    {
        int g=0;
        
        while(c>0)
        {
            //cout<<"ok"<<endl;
            c=a%b;
            a=b;
            b=c;
        }
        g=(a1*b1)/b;
        cout<<"GCD: "<<b<<endl;
        cout<<"LCM: "<<g;

    }
    else if(b>a && a>0 && b>0)
    {
        int g=0;
        
        while(c!=0)
        {
            //cout<<"ok"<<endl;
            c=b%a;
            b=a;
            a=c;
        }
        g=(a1*b1)/a;
        cout<<"GCD: "<<a<<endl;
        cout<<"LCM: "<<g;

    }
    else
    {
        cout<<"your input not correct";
    }

    return main();

}
