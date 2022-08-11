#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    set<int>::iterator it;

    set<string>str;
    set<string>::iterator its;

    s.insert(10);
    s.insert(15);
    s.insert(11);
    s.insert(25);
    s.insert(16);
    s.insert(7);
    s.insert(1);
    s.insert(99);
    s.insert(150);

    it=s.find(15);
    s.erase(it);
    s.erase(s.find(99));

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;

    str.insert("Tanvir");
    str.insert("Habiba");
    str.insert("Al Amin");
    str.insert("Emon");
    str.insert("Jubair");
    str.insert("Sogib");
    str.insert("Sabrina");

    cout<<endl;

    //Can't insert same value or string
    pair<set<string>::iterator, bool> p;

    p=str.insert("Tanvir");

    if(p.second==false)
    {
        cout<<"No insert";
    }
    else
    {
        cout<<"insert sucessfully";

    }

    //print lexicographically Short
    
    cout<<endl;

    for(its=str.begin();its!=str.end();its++)
    {
        cout<<*its<<"\t";
    }

}