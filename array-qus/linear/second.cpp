#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>arr={121,30,50,40,20,50,32,67,49};
int o=0,b=0, c=0;
for(auto i:arr){
    if (50>i)
    {
      o++;
    }
     if (50<=i&&i<=80)
    {
        b++;
    }
    if(i>80){
        c++;
    }
    
    

}

cout<<o<<" "<<b<<" "<<c;

return 0;
}