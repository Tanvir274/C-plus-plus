#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    stack<int> i;

    s.push("Tanvir");
    s.push("Nabil");
    s.push("Istik");
    s.push("Emon");
    s.push("Jubair");
    cout<<s.size()<<"\t TOP: "<<s.top()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();

    }
    cout<<endl<<"Enter integer Value for stack : ";

    int v, t=5;
    while(t--)
    {
        cin>>v;
        i.push(v);
    }

    cout<<endl<<"Your Enter value in stack: "<<endl;
    while(!i.empty())
    {
        cout<<i.top()<<"\t";
        i.pop();
    }

}