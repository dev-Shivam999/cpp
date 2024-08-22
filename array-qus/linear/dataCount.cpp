#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,1,1,0,1,0,1,0,1,1,1,0,0};
    int zero=0,one=0;
    for(auto i:arr){
        if(i==0){
            zero++;
        }
        if (i==1){  
        {
           one++;
        }
        
    }
    }

    arr.clear();

    for (int i = 0; i <zero; i++)
    {
        arr.push_back(0);
    }
    for (int i = zero; i < zero+one; i++)
    {
        arr.push_back(1);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    
    
    

return 0;
}