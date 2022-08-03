#include<iostream>
using namespace std;

int main()
{
    string str1, str2, result,result1;

    cout<<"Enter first word:";
    cin>>str1;
    cout<<"Enter Second word:";
    cin>>str2;
    result=str1+str2;
    result1=str1.append(str2);

    cout<<endl<<result;
    cout<<endl<<result1;

}