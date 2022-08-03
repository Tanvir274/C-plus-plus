#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

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
}