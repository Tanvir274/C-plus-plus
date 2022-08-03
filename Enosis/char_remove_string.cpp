#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="Bangladesh";
    int l=str.size();
    int r;
    cin>>r;

    for(int i=0;i<l;i++)
    {
        if(i==r-1)
        {
            str[i]='\0';

        }
    }
    cout<<str;
}