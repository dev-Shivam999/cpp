#include<bits/stdc++.h>
using namespace std;

int main(){


// vector<int> f={1,2,3,5};
// int count=f[0],fl=0;
// for(int i=0;i<f.size();i++){
// if(f[i]!=count){
//     fl=1;
//     break;
// }
// count++;

// }
// (fl!=0)?cout<<count:cout<<"-1";


// vector<int>s={1,2,4,8,32};
// int count=s[1]/s[0];
// int f=0;
// for (int i = 1; i <s.size(); i++)
// {
//     if (count!=s[i])
//     {
//         f=1;
//         break;
//     }
//     count*=s[i];
    
// }
// (f != 0) ? cout << count : cout << "-1";

vector<int> s = {1, 3, 5, 7,11};
int count=s[1]-s[0];
int in=0;
int f=0;
for (int i = 1; i <s.size()-1; i++)
{
    if (count!=s[i+1]-s[i])
    {
        count=count+s[i];
        f=1;
        break;
    }
    
    count=s[i+1]-s[i];

}
(f != 0) ? cout << count : cout << "-1";

return 0;
}