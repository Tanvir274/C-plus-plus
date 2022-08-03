#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="Bangladesh";

    vector<char> vec;

    for(int i=str.size()-1;i>=0;i--)
    {
        vec.push_back(str[i]);
    }

    for(int i=0;i<vec.size();i++)
    {
       cout<<vec[i];
    }
}

