#include <bits/stdc++.h>

using namespace std;

int reverse(int x) 
{
   
   long int rev=0;
   
   
   if(x>=pow(2,31)-1 || x<= -pow(2,31))
   {
       return 0;
   }
   else if(x>=0)
   {
       while(x!=0)
       { 
           
           rev = rev * 10;
           if(rev>=pow(2,31)-1 || rev<= -pow(2,31))
           {
               return 0;
           }
           rev = rev+(x%10);
           x=x/10;
           
       }
       
       return rev;
           
       
   }
   else
   {
       x = -x;
       while(x!=0)
       { 
           
           rev = rev * 10;
           if(rev>=pow(2,31)-1 || rev<= -pow(2,31))
           {
               return 0;
           }
           rev = rev+(x%10);
           x = x/10;
           
       }
       
       return -rev;
   
           
   }
        
        
}

int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);

/*___________ Shortcut___________*/
    string str;
    
    if(x>=pow(2,31)-1 || x<= -pow(2,31))
    {
        cout<<0;
    }
    else if(x>=0)
    {
        str=to_string(x);
        reverse(str.begin(),str.end());
        x=stoi(str);
        cout<<x;
    }
    else
    {
        x= -1 *x;
        str=to_string(x);
        reverse(str.begin(),str.end());
        x=stoi(str);
        cout<<-x;
        
            
    }
}