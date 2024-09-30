#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={10,19,38,7,5};

    // for (int i = 0; i <arr.size(); i++)
    // {
    //     int min = i;
    //     for (int j = i+1; j <arr.size(); j++)
    //     {
    //         if (arr[min]>arr[j])
    //         {
    //             min=j;
    //         }
            
            
    //     }
    //     swap(arr[i],arr[min]);
        
    // }
    
for (int i = 0; i < arr.size()-1; i++)
{
    for (int j = i+1; j < arr.size(); j++)
    {
        if (arr[i]>arr[j])
        {
         swap(arr[i],arr[j]);
        }
        
        
    }
    
}

    // int n = arr.size();
    // for (int i = 1; i < n; i++)
    // {
    //     int key = arr[i];
    //     int j = i - 1;

        
    //     for (j=i-1;j >= 0 && arr[j] > key;j--)
    //     {
    //         arr[j+1] = arr[j];
            
    //     }
    //     arr[j + 1] = key;
    // }
    for (auto i : arr)
    {
        cout << i << " ";
}

return 0;
}