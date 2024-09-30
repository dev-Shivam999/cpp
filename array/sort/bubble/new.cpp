#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr={2,1,4,3,6,5};
for (int i = 0; i < arr.size(); i++)
{
    int min = i;
    for (int j = i+1; j <arr.size(); j++)
{
        if (arr[j] < arr[min]){
            swap(arr[j],arr[min]);
        }
    }
    
}

for(auto i:arr){
    cout<<i<<' ';
}


return 0;
}