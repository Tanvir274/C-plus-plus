#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string,int> p("Kanij",24);
    // p.first="Tanvir";
    // p.second=25;
    cout<<p.first<<"\t"<<p.second<<endl;

    vector<pair<int,string>>vp;
    vector<pair<int,string>>:: iterator it;
    vp.push_back(make_pair(1,"Habib"));
    vp.push_back(make_pair(2,"Karim"));
    vp.push_back(make_pair(3,"Nowrin"));

    //cout<<"\n"<<vp[0].first<<"\t"<<vp[0].second;

    for(it=vp.begin();it!=vp.end();it++)
    {
        cout<<it->first<<"\t"<<it->second<<"\n";
    }
    
}