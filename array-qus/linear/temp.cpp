#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1 2 3  4 6 9 13 19
    // 
    int a=1,b=2,c=3,d,e;
    for (int i = 4; i < 10; i++)
    {
        
        d=a+c;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
        


    }
    

    

return 0;
}