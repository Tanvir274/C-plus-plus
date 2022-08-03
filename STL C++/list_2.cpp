#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={3,6,1,8,2,7};
    list <int> mylist(arr,arr+6);
    list <int>::iterator it;

    for(it=mylist.begin(); it!=mylist.end();it++)
    {
        cout<<*it<<"\n";
    }
    cout<<"################ n @@@@@@@@@@@@@@@@"<<endl;

    cout<<mylist.front()<<endl;//
    cout<<mylist.back()<<endl;

    mylist.pop_back();
    mylist.pop_front();
    cout<<"\n";

    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"\t";
    }
    
    
}