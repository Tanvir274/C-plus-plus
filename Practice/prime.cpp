#include<iostream>
#include <math.h>
using namespace std;



int main()
{
    int n;
    cout<<"Enter the range for find prime number: ";
    cin>>n;
    
    int mark[n+1],nprime=0,limit=sqrt(n)+2,prime[(n/2)+1];
    //memset(prime,0,sizeof(prime));  need {#include<cstring>} header
    for(int i=4;i<=n;i+=2)
    {
        mark[i]=1;
    }
    if(n!=1)
    {
        prime[nprime++]=2;

    }
    



    for(int i=3;i<=n;i+=2)
    {
      if(mark[i]!=1)
      {
        prime[nprime++]=i;

        if(i<=limit)
        {
            for(int j=i*i;j<=n;j+=i*2)
            {
                mark[j]=1;
                
        
            }
        }

      }
    }

    int check=0;
    for(int i=0;i<nprime;i++)
    {
        if(prime[i]==n)
        {
            cout<<endl<<"Your Input Number is Prime";
            check=1;
            break;
        }
    }
    if(check==0)
    {
       cout<<endl<<"Your Input number not prime "; 
    }
    
    cout<<endl<<"Prime number in this range : ";

    for(int i=0;i<nprime;i++)
    {
        cout<<prime[i]<<" ";
        
    }
    cout<<endl<<"Total prime number in this range :"<<nprime<<endl;


    cout<<endl<<endl;
    return main();

}
