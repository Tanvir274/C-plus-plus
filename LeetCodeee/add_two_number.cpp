#include <bits/stdc++.h>
using namespace std;

int arr3[50];

// int main()
// {
//     int l1, l2;
//     cin>>l1>>l2;

//     int arr1[l1], arr2[l2];

//     cout<<endl<<"Arrey 1: ";
//     for(int i=0;i<l1;i++)
//     {
//         cin>>arr1[i];
//     }
//     cout<<endl<<"Arrey 2: ";
//     for(int i=0;i<l2;i++)
//     {
//         cin>>arr2[i];
//     }

//     int carry=0;
//     int sum=0;

//     if(l1>=l2)
//     {

//         for(int i=0;i<l1;i++)
//         {

//             if(l2>i)
//             {
//                 sum=arr1[i]+arr2[i]+carry;

//                 arr3[i]=sum%10;
//                 carry=sum/10;

//             }
//             else
//             {
//                sum=arr1[i]+carry;

//                 arr3[i]=sum%10;
//                 carry=sum/10;
//             }

//         }

//         for(int i=0;i<l1;i++)
//         {
//             cout<<arr3[i];
//         }
//         if(carry>0)
//         {
//             cout<<carry;
//         }

//     }
//     else
//     {
//         for(int i=0;i<l1;i++)
//         {

//             if(l1>i)
//             {
//                 sum=arr1[i]+arr2[i]+carry;

//                 arr3[i]=sum%10;
//                 carry=sum/10;

//             }
//             else
//             {
//                sum=arr1[i]+carry;

//                 arr3[i]=sum%10;
//                 carry=sum/10;
//             }

//         }
//         for(int i=0;i<l2;i++)
//         {
//             cout<<arr3[i];
//         }
//         if(carry>0)
//         {
//             cout<<carry;
//         }

//     }

// }

int main()
{
    int l1, l2;

    cin >> l1 >> l2;

    int arr1[l1], arr2[l2];
    for (int i = 0; i < l1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < l2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> vec;
    int i = 0, j = 0;
    int sum = 0, carr = 0;

    while (i < l1 || j < l2)
    {
        sum = carr;

        if (i < l1)
        {
            sum = sum + arr1[i];
            i++;
        }
        if (j < l1)
        {
            sum = sum + arr2[j];
            j++;
        }

        carr = sum / 10;
        vec.push_back(sum % 10);
    }

    if (carr > 0)
    {
        vec.push_back(carr);
    }

    for (auto x : vec)
    {
        cout << x << "\t";
    }
}
