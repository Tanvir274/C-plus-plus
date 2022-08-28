// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     int arr[n],ans[n]={0};

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     stack<int> s;

//     for(int i=1;i<n;i++)
//     {

//         if(arr[i-1]>arr[i])
//         {
//             int t=i-1;
//             while(!s.empty() && t>=0)
//             {
//                 if(arr[t]>arr[arr[i]])
//                 {
//                     s.pop();
//                 }
//                 else
//                 {
//                     s.push(t);

//                 }

//             }

//         }
//         else
//         {
//             s.push(i);

//         }

//     }
// }

#include <bits/stdc++.h>
using namespace std;
int t, n, a[200100], b[200100];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        int j = 1;
        for (int i = 1; i <= n; i++)
        {
            while (b[j] < a[i])
                j++;
            cout << b[j] - a[i] << ' ';
        }
        cout << endl;
        j = 1;
        for (int i = 1; i <= n; i++)
        {
            j = max(j, i);
            while (b[j] >= a[j + 1] && j < n)
                j++;
            cout << b[j] - a[i] << ' ';
        }
        cout << endl;
    }
}