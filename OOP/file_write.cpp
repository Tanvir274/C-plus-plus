#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("Tanvir.txt",ios::out|ios::app);

    string name;
    cout<<"Take input : ";
    getline(cin,name);
    file<<"###    New Commant  @@@@@ \n "<<name<<endl;

    cout<<"Data Stored Sucessfully"<<endl;

    string str;
    int age;
    for(int i=0;i<3;i++)
    {
        cout<<"Name: ";
        cin>>str;
        file<<str<<"\t";

        cout<<"Age : ";
        cin>>age;
        file<<age<<endl;
        

    }
    file.close();
}