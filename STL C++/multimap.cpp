#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;

    m.insert(make_pair("Tanvir",01));
    m.insert(make_pair("Tanim",05));
    m.insert(make_pair("Tania",10));
    m.insert(make_pair("Tareq",7));
    m.insert(make_pair("Tanvir",01));
    m.insert(make_pair("Tania",05));

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }


    multiset<int> ms;
    multiset<int>::iterator its;

    ms.insert(100);
    ms.insert(10);
    ms.insert(100);
    ms.insert(10);
    ms.insert(50);

    for(its=ms.begin();its!=ms.end();its++)
    {
        cout<<*its<<endl;
    }

}