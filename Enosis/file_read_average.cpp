#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("enosis.txt");

    double value,sum=0;
    int n=0;
    //string value;

    while(file>>value)
    {
        n++;
        cout<<value<<" ";
        sum=sum+value;
        //cout<<value<<"\t";
        
    }
    file.close();

    double aver= sum/n;
    cout<<endl<<aver;

}