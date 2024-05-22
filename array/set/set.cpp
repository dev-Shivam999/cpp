#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr;    // dynamic array
    // vector<int> arr(9); // dynamic array-->static array
    // map<int, int> arr;  // key-value pair key is index of dynamic array
    // set<int> arr;       // its remove duplicates
    // pair<int, int> arr;
    // list<int> arr;
    // stack<int> arr;//lifo
    // queue<int>arr;//fifo
    // priority_queue<int>arr;//fifo but have a priority
    // deque<int>arr;//liLo

    // 2D array
    //  vector<vector<int>>arr={{1,2},{3},{4,5,6}};

    // for(auto inarr:arr){
    //     for(auto it:inarr){

    //     cout<<it<<" ";
    //     }
    //     cout<<"\n";
    // }

    // 3d

    // vector<vector<vector<int>>> arr = {
    //     {{1, 2}, {3}, {4, 5, 6}},
    //     {{1, 2}, {3}, {4, 5, 6}}};

    // for (auto inarr : arr)
    // {
    //     for (auto it : inarr)
    //     {
    //         for (auto p : it)
    //         {

    //             cout << p << " ";
    //         }

    //         cout << "\n";
    //     }
    //     cout << "\n";
    // }





vector<int>arr={1,2,3,4,5,6,9};
    int n=arr.size();
    int mid=(0+n)/2;
    reverse(arr.begin(),arr.begin()+mid);
    
    reverse(arr.begin()+mid+1,arr.end());
    reverse(arr.begin(),arr.end());

    for(auto it:arr){
        cout<<it<<" ";
    }




    return 0;
}