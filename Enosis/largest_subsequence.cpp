#include<bits/stdc++.h>
using namespace std;



// int main()
// {
//     string str="Video provides a powerful way to help you prove your point";

//     int l=str.size();
//     int t=0;
//     int s=-1;
//     int largest=0;
//     int s1=0,s2=0;
    

//     for(int i=0;i<l;i++)
//     {
//         if(s==-1)
//         {
//             s=i;
//         }
//         else if(str[i]==' ')
//         {
//             if(largest<t)
//             {
//                 largest=t;
//                 s1=s;
//                 s2=s+t;

//             }
            
//             s=-1;
//             t=0;  
//         }
//         else if(i==l-1)
//         {
//             t++;
//             if(largest<t)
//             {
//                 largest=t;
//                 s1=s;
//                 s2=s+t;

//             }
            
//             s=-1;
//             t=0;

//         }
//         else
//         {
//             t++;
//         }
      
//     }

//     for(int i=s1;i<=s2;i++)
//     {
//         cout<<str[i];
//     }

    
// }

int main()
{
    string str="Video provides a powerful way to help you prove your point";

    int s=str.size();
    int Max=0;

    list<char>ch;


    for(int i=0;i<s;i++)
    {
        if(str[i]==' ' || i==(s-1))
        {
            if(i==(s-1))
            {
              ch.push_front(str[i]);
            }
            int s=ch.size();

            Max=max(Max,s);
            ch.clear();

        }
        else
        {
            ch.push_front(str[i]);

        }
    }
    cout<<Max;

}