#include<bits/stdc++.h>
using namespace std;

// void trans(string str,int s,int e)
// {
//     for(int i=e;i>=s;i--)
//     {
//         cout<<str[i];
//     }
//     cout<<" ";
// }

// int main()
// {
//     string str="Video provides a powerful way to help you prove your point.";

//     int l=str.size();
//     int t=0;
//     int s=-1;

//     //transform(str.begin(),str.end(),str.begin(),::tolower);
    

//     for(int i=0;i<l;i++)
//     {
//         if(s==-1)
//         {
//             s=i;
//         }
//         else if(str[i]==' ')
//         {
//             trans(str,s,s+t);

//             //cout<<s<<" "<<s+t<<endl;
//             s=-1;
//             t=0;
           
//         }
//         else if(i==l-1)
//         {
//             if(str[i]=='.')
//             {
//                 trans(str,s,s+t);
//                 cout<<".";

//             }
//             else
//             {
//                 t++;
//                 trans(str,s,s+t);


//             }

//         }
//         else
//         {
//             t++;
//         }
      
//     }

    
// }

int main()
{
    string str="Video provides a powerful way to help you prove your point";

    int s=str.size();

    list<char>ch;


    for(int i=0;i<s;i++)
    {
        if(str[i]==' ' || i==(s-1))
        {
            if(i==(s-1))
            {
              ch.push_front(str[i]);
            }
            
            for(auto x: ch)
            {
                cout<<x;
            }
            cout<<" ";
            ch.clear();

        }
        else
        {
            ch.push_front(str[i]);

        }
   }
}