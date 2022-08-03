#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    list<int>::iterator it;

    li.push_back(5);
    li.push_back(7);
    li.push_back(1);
    li.push_back(8);
    li.push_back(4);

    li.push_front(20);
    li.push_front(15);
    li.push_front(12);
    li.push_front(2);

    for (int i : li)
    {
        cout << i << " ";
    }
    cout << endl;

    li.reverse();

    for (int i : li)
    {
        cout << i << " ";
    }

    cout << endl
         << li.size() << endl;

    // li.clear();
    // cout<<endl<<li.size()<<endl;

    int arr[5] = {56, 5, 3, 10, 7};

    list<int> mylist(arr, arr + 5);

    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }

    // insert value 77 before 3;
    cout << endl
         << "##########Search the value########### " << endl;
    cout << "Enter the value for search: ";
    int s;
    cin >> s;

    it = find(mylist.begin(), mylist.end(), s);

    if (mylist.end() == it)
    {
        cout << "Sorry! Not found: " << s;
    }
    else
    {
        cout << "Found" << endl;

        cout << "Enter value for Insert in the arrey before " << s << ": ";
        int n;
        cin >> n;
        mylist.insert(it, n);
        cout << "After insert array: ";

        for (it = mylist.begin(); it != mylist.end(); it++)
        {
            cout << *it << " ";
        }
    }
    // Erase number from arrey
    cout << endl
         << "Erase number from array:";
    int e;
    cin >> e;
    it = find(mylist.begin(), mylist.end(), e);
    mylist.erase(it);
    cout << "After erase array: ";

    for (it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
}