#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Baangladesdhd";

    sort(str.begin(), str.end());

    cout << str << endl;

    int length = str.size();

    int most = 1, secmost = 1, count = 1;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            if (count >= most)
            {
                if (count > most)
                {
                    secmost = most;
                    most = count;
                }
                else
                {
                    most = count;
                }
            }
            else if (count > secmost)
            {
                secmost = count;
            }

            count = 1;
        }
    }

    cout << most << "\t" << secmost;
}