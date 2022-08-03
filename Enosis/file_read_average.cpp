#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("enosis.txt");

    double value,sum=0;
    int n=0;

    while(file>>value)
    {
        n++;
        sum=sum+value;
        
    }
    file.close();

    double aver= sum/n;
    cout<<aver;

}