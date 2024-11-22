#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> In;
    vector<int> arr = {15, 14, 13, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1,16, 3, 3, 17, 13, 3};
    vector<int> newArr;

   
    for (int i = 0; i < arr.size(); i++)
    {
        In[arr[i]]++;
    }

    
    for (auto it : In)
    {
        cout << it.first << " : " << it.second << "\n";
        for (int i = 0; i < it.second; i++)
        {
            newArr.push_back(it.first);
        }
        
    }
    cout<<"\n[";
    for(auto it : newArr){
        cout<<it<<",";
    }
    cout<<"]";

    

    return 0;
}
