#include<bits/stdc++.h>
using namespace std;

bool myfun(int a, int b)
{
    return(a>b);
}

int main()
{
    vector <int> vec,vec1(5,-2);

    vec.push_back(55);
    vec.push_back(1);
    vec.push_back(95);
    vec.push_back(4);
    vec.push_back(7);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(56);

    int s = vec.size();
    cout<<s<<endl;

    for(int i=0;i<s;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;



    vec1.push_back(95);

    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }




    vector <int> vec3;
    vector <int>::iterator it;

    vec3.push_back(3);
    vec3.push_back(1);
    vec3.push_back(15);
    vec3.push_back(7);

    cout<<endl;
    for(it= vec3.begin();it !=vec3.end();it++)
    {
        cout<<*it<<" ";
    }

    sort(vec.begin(),vec.end()); // assending

    

    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    //sort(vec.begin(),vec.end(),myfun);  //decending order sort
    sort(vec.begin(),vec.end(),greater<int>()); 
    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;


    sort(vec.begin(),vec.begin()+4);  // sort only first 4 number

    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<vec[i]<<" ";
    }

}