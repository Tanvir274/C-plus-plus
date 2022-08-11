#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   int b,m;
   cin>>b;
   
   vector<int> p;
   if(b==0)
   {
       cout<<0;
   }
   else
   {
       while(b>0)
       {
           m=b%2;
           p.push_back(m);
           b=b/2;
           
           
       }
       
       for(int i=p.size()-1;i>=0;i--)
       {
           cout<<p[i];
       }
       
   }
   cout<<endl;
 
    return main();
}