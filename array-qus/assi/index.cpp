#include<bits/stdc++.h>
using namespace std;
int f(vector<int>&arr){
    for(int i=0; i<arr.size();i++){
        if (arr[i]==3)
        {
            return i;
        }
        
    }
    return -1;
}

void max(vector<int>&arr){
    int max=arr[0];
    int min=arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] >max)
        {
            max=arr[i];
        }
        if(min>arr[i]) min=arr[i];
    }
    cout<<max<<" "<<min <<endl;
}

int l(vector<int>&arr){
    int count=arr.size()+1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]<8){
            count=arr[i];
        }
        
    }
    if (count<arr.size())
    {
        return count;
    }else{
    return -1;
    }
    
}

int main(){

vector<int>arr={1,4,3,2,6,5,8,7,9,11};

// int a=f(arr);

// max(arr);

// int b=l(arr);
// cout<<b<<endl;

1,2,3,4,5,6=15


3,5,6=11
 3



return 0;
}