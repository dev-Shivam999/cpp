#include <bits/stdc++.h>
using namespace std;

int main()
{

  // 1 1 2 3 5 8 13
  // int a=1 ,b=1,c;
  // cout<<a<<" "<<b<<" ";
  // for (int i = 2; i <8; i++)
  // {
  //     c=a+b;
  //     cout<<c<<" ";
  //     a=b;
  //     b=c;
  // }

  // 1 2 2 4 8 32
  //     int a1=1,a2=2,a3;
  // cout<<a1<<" "<<a2<<" ";
  //     for (int i = 2; i <6; i++)
  //     {
  //         a3=a1*a2;
  //         cout<<a3<<" ";
  //         a1=a2;
  //         a2=a3;
  //     }

  // 1 2 3  6 11 20

  // int a4=1,a42=2,a5=3,a6;
  // cout<<a4<<" "<<a42<<" "<<a5;
  // for(int i =4;i<7;i++){
  //     a6=a4+a5+a42;
  //     cout<<a6<<" ";
  //     a4=a42;
  //     a42=a5;
  //     a5=a6;

  // }

  // 1 2 4 8 32
  //     int a7=1;
  // for (int i = 0; i < 5; i++)
  // {
  //   a7*=2;
  //   cout<<a7<<" ";
  // }

  // 1 2 3 6 18
  // int a8 = 1, a9 = 2, a10;
  // for (int i = 2; i < 7; i++)
  // {
  //     a10 = a8 * a9;
  //     cout<<a10<<" ";
  //     a8 = a9;
  //     a9 = a10;
  // }

  // 1 2 3 4 5 7 9 13

  int p = 1, q = 2, r = 3, s = 4, t;
  cout << p << " " << q << " " << r << " " << s << " ";

  for (int i = 4; i < 10; i++)

  {
    t = q + r;
    cout << t << " ";
    p = q;
    q = r;
    r = s;
    s = t;
  }

  return 0;
}