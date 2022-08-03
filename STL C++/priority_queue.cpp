#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;

    p.push(3);
    p.push(100);
    p.push(5);
    p.push(7);
    p.push(34);
    p.push(39);
    //its print decending ordere

    while(!p.empty())
    {
        cout<<p.top()<<"\t";
        p.pop();
    }
    cout<<endl;


    priority_queue<string> pstr;

    pstr.push("Tanvir");
    pstr.push("Habiba");
    pstr.push("Emon");
    pstr.push("Al Amin");
    pstr.push("SABrina");

    while(!pstr.empty())
    {
        cout<<pstr.top()<<"\t";
        pstr.pop();
    }




}