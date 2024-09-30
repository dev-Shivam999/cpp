#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={2,1,3,5,7,6,4};

for (int j = 0; j < arr.size()-1; j++)
{
int min=j;
for (int i = j+1; i < arr.size(); i++)
{
    if (arr[min] > arr[i])
    {
        min = i;
    }
}
swap(arr[j], arr[min]);
}
    

    for(auto i:arr){
        cout<<i<<" ";
    }
    

return 0;
}