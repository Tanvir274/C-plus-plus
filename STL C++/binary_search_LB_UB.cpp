#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v={1,5,7,8,9,13,15,45,55,76};
    vector<int>::iterator it;
    bool res= binary_search(v.begin(),v.end(),9);
    if(res)
    {
        cout<<"Founded";
    }
    else
    {
        cout<<"Not found";

    }

    it= lower_bound(v.begin(),v.end(),13);
    cout<<endl<<"Res: "<<*it <<"  Index: "<<distance(v.begin(),it);

    it= upper_bound(v.begin(),v.end(),13);
    cout<<endl<<"Res: "<<*it <<"  Index: "<<(it-v.begin());


}