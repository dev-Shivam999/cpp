#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char>abc={'a','b','c','d','f','h','i','j','l'};

char a='a';

sort(abc.begin(),abc.end());

for(auto i:abc){
    if (a==i)
    {
        a++;
        
    }else{
        cout <<a<<endl;
        a+=2;
    }
    
}



// for(int i=1;i<=5;i++){
//    for (int j = 1; j <=i; j++)
//    {
//        cout <<2*j<<" ";
//    }
//    cout<<endl;
// }
// for(int i=0;i<=5;i++){
//     for (int j = 1; j <=5-i; j++)
//     {
//         cout <<8- j << " ";
//     }
//     cout << endl;
// }

return 0;
}