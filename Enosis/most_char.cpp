#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str="kjdsfdbcxkjfcrgjnsdfhjdgjsdghfg";

    int size=str.size();

    int alphabet[26]={0};

    for(int i=0;i<size;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            alphabet[str[i]-'a']++;
        }

    }

    int ans=0;
    char ch='a';

    for(int i=0;i<26;i++)
    {
       if(alphabet[i]>ans)
       {
         ans=alphabet[i];
         ch= i+'a';
       }

    }

    cout<<ans<<"\t"<<ch;

}