#include<bits/stdc++.h>
using namespace std;

void Print(vector<int> &arr){
    for(auto  it:arr){
        cout<<it<<" ";
        
    }
    cout<<"\n";
}

int main(){


vector<int>arr={1,2,3,4,5};
arr.push_back(6);
Print(arr);

arr.pop_back();
Print(arr);

return 0;
}