#include<bits/stdc++.h>
using namespace std;




int main()
{
    int i=0,j,target,nums[]={2,7,11,15};

    cout<<"Input: ";

    cin>>target;

    int  l=sizeof(nums)/sizeof(nums[0]);
    list <int> li(nums,nums+l);
    list <int> ::iterator it;

    for(int i=0;i<l;i++)
    {
        int f=target-nums[i];

        it=find(li.begin(),li.end(),f);
        if(li.end() !=it)
        {
            cout<<i<<"  "<<distance(li.begin(), it);
            break;

        }
 
    }

}