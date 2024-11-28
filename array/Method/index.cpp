#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {2, 1, 5, 4};
    int findValueByIndex = arr.at(2);

    // arr.push_back(3);// add element from back
    // arr.insert(arr.begin()+0,4);// add value on 0 index

    // arr.pop_back()
    // arr.erase(arr.begin()+2);  // remove element from   2 index



    // reverse(arr.begin(), arr.end());


    // sort(arr.begin(), arr.end());


    // arr.reserve(1);

    // int a=find(arr.begin(),arr.end(),40);

    for (int i : arr)
    {
        cout << " " << i << endl;
    }

    return 0;
}