#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string,int> m;
    map <string,int> ::iterator it;

    m["tanvir"]=3;
    m["rahime"]=10;
    m["Karim"]=5;
    m["jarin"]=45;
    m["tanvir"]=45;// duplicate value not insert

    cout<<m["jarin"]<<"\n";

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<"\n";
    }
}