#include <bits/stdc++.h>
using namespace std;

#define length 18

int main()
{
    bitset<8> b;

    cout << b; // it all bit default initialization by 0;

    b.set(); // for all bit initialization 1;

    cout << endl << b;

    b.reset(); // for all bit initialization 1;

    bitset<length> s(15);

    cout << endl << s;

    s[14]=1;

    cout << endl << s;
    cout << endl << s.flip(); // 1 convert 0, 0 convert 1
    cout << endl << s.size();
    cout << endl << s.count(); //How many 1 
    cout << endl <<s.size()- s.count(); //How many 0 


    bitset<4> t(string("0011"));

    cout<<endl<<"............................";

    cout << endl << t;

    t=t<<2;
    cout << endl << t;
    t>>=1;
    cout << endl << t;

    bitset<4> f(string("1010"));

    cout << endl << t <<" & "<< f<<"= "<< (t & f);
    cout << endl << t <<" | "<< f<<"= "<< (t | f);
    cout << endl << t <<" ^ "<< f<<"= "<< (t ^ f);
    

}