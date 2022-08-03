#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream file;
    file.open("enosis.txt",ios::out |ios::app);

    cout<<"Take 10 Integer: "<<endl;
    int v;

    for(int i=0;i<10;i++)
    {
        cin>>v;
        file<<v<<endl;
        
    }
    file.close();

}