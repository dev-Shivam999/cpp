#include<bits/stdc++.h>
using namespace std;
void Print(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] <<" ";
    }
}

int main(){

    vector<int>arr={7,6,5,4,3,2,1};
    // for (int i = 0; i < arr.size()/2; i++)
    // {
    //     swap(arr[i],arr[arr.size()-1-i]);
    // }
    
// vector<int>fre(arr.size(),0);

// for (int i = 0; i < arr.size(); i++)
// {
//     fre[arr[i]]++;
// }

// Print(fre);


// reverse(arr.begin(),arr.end());
// reverse(arr.begin(),arr.begin()+4);
// reverse(arr.begin()+4,arr.end());

Print(arr);




  
    

return 0;
}