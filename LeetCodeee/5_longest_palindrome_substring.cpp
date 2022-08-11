#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int l=s.size();

    for(int i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    int al[26]={0};

    for(int i=0;i<l;i++)
    {
        if(al[s[i]-'a']==0)
        {
            al[s[i]-'a']=i+1;

        }
        
    }
}