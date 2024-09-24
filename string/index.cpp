#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str="lol";
    // string str=(5,"lol");//make five copy
    string s = "GeeksforGeeks";

    // cout << str << endl;

    // string str1 = "Hello";
    // string str2 = "World";

    // cout << "Length of str1: " << str1.length() << endl;
    // cout << "Maximum possible length of str1: " << str1.max_size() << endl;

    // str1.swap(str2);
    // cout << "Swapped strings: str1 = " << str1 << ", str2 = " << str2 << endl;

    string trackingNumber = "ORD12345098765";

    // string postalCode = trackingNumber.substr(3,6);
    // cout<<trackingNumber[4] << endl;
    // cout << "Postal Code: " << postalCode << endl;
    char a = trackingNumber.at(3);
    cout << a;
    return 0;
}