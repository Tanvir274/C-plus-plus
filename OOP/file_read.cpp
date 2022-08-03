#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main()
{
    string line;

    ifstream file("tanvir1.txt");

    while(getline(file,line))
    {
        cout<<line<<endl;
    }

    file.close();

}