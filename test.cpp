#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int another(int &d)
{
    int c = -2 * d + d;
    return c;
}
void fac(int &f)
{
    int k = 1;
    for (int i = 1; i <= f; i++)
    {
        k *= i;
    } cout<<k << endl;
}
int isEvenOdd(int &po){
    if(po<0){
        cout<<"odd"<<endl;

    }else{
        cout<<"even"<<endl;
    }
}

    int
    sum()
{
    int a, b, c, po, f;
    cout << "enter the 1 numbers";
    cin >> a;
    cout << "enter the 2 numbers";
    cin >> b;
    cout << "enter the 3 numbers";
    cin >> c;
    int d = a + b + c;
    if (d < 0)
    {
        po = another(d);
         fac(po);
       isEvenOdd(po)
    }
}

int main()
{

    int a, b, c, d, e;
    cout << "Enter the 1 number :";
    cin >> a;
    cout << "Enter the 2 number :";
    cin >> b;
    cout << "Enter the 3 number :";
    cin >> c;
    cout << "Enter the 4 number :";
    cin >> d;
    cout << "Enter the 5 number :";
    cin >> e;

    int average = (a + b + c + d + e) / 5;
    if (average < 50)
    {
        int check = sum();

        if (pow(check, 2) == 2)
        {
            cout<<"power of 2";
        }else{
            cout<<"power of 2 noo";
        }
    }

    return 0;
}