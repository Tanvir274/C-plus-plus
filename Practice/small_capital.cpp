#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter sentence (small letter) : ";
    cin>>str;

    for(int i=0; i<str.length();i++)
    {
        str[i]=str[i] - 'a' + 'A';
    }

    cout<<endl<<"Output : "<<str;

    cout<<endl<<"Output : ";
    for(int i=0; i<str.length();i++)
    {
       
        cout<<str[i] - '0'<<" " ;
    }

    
}