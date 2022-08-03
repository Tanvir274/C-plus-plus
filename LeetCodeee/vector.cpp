#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,6,11,17,30,40};
    cout<<"Array: ";

    for(const int& i: arr)
    {
        cout<<i<<" ";

    }
    cout<<endl<<"Vector array fixed index value: "<<arr[1];
    cout<<endl<<"Vector array fixed index value: "<<arr.at(4); //prefare because over index not give garvage value

    cout<<endl<<"Arrey:";
    for(int i: arr)
    {
        cout<<i<<" ";

    }

    

    arr.push_back(20);
    cout<<endl<<"After add value Arrey:";
    for(int i: arr)
    {
        cout<<i<<" ";

    }

    arr.at(4)=7;
    arr.at(6)=13;

    cout<<endl<<"After change value Arrey:";
    for(int i: arr)
    {
        cout<<i<<" ";

    }

    arr.pop_back();

    cout<<endl<<"After Delete value Arrey:";
    for(int i: arr)
    {
        cout<<i<<" ";

    }




    cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;


    vector<int> num {1, 2, 3, 4, 5};

        // declare iterator
        vector<int>::iterator iter;

        // initialize the iterator with the first element
        iter = num.begin();

        // print the vector element
        cout << "num[0] = " << *iter << endl;

        // iterator points to the 3rd element
        iter = num.begin() + 2;
        cout << "num[2] = " << *iter;

        // iterator points to the last element
        iter = num.end() - 1;
        cout << "num[4] = " << *iter;



}