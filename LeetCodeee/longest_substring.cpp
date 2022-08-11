#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string str;
//     cin >> str;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }

//     int count = 0, result = 0, alph[26] = {0};

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (alph[str[i] - 'a'] == 0 && str[i] >= 'a' && str[i] <= 'z')
//         {
//             alph[str[i] - 'a'] = 1;
//         }
//         else
//         {
//             for (int i = 0; i < 26; i++)
//             {
//                 if (alph[i] == 1)
//                 {
//                     count++;
//                     alph[i] = 0;
//                 }
//             }
//             alph[str[i] - 'a'] = 1;
//             if (count > result)
//             {
//                 result = count;
//             }
//             count = 0;
//         }
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (alph[i] == 1)
//         {
//             count++;
//             alph[i] = 0;
//         }
//     }
//     if (count > result)
//     {
//         result = count;
//     }

//     cout<<result<<endl;

//     return main();
// }


int main()
{
    string s;
    cin>>s;

    vector<int> vec(256,-1);
    int start=-1,maxlen=0;

    for(int i=0;i<s.size();i++)
    {
        if(vec[s[i]]>start)
        {
            start=vec[s[i]];
        }

        vec[s[i]]=i;

        maxlen=max(maxlen,i-start);

    }

    cout<<maxlen<<endl;

    return main();

    

}