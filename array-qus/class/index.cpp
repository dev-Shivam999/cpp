#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> arr = {1, 1, 2, 3, 5, 13};
    // for (int i = 2; i < arr.size(); i++)
    // {
    //     if (arr[i] != arr[i - 1] + arr[i - 2])
    //     {
    //         cout << arr[i - 2] + arr[i - 1] << endl;
    //     }
    // }

    vector<int> arr2 = {2, 4, 3, 6, 5, 7, 1};
    int index = 0;

    for (int i = 0; i < arr2.size() - 1; i++)
    {

        for (int j = i + 1; j < arr2.size(); j++)
        {
            if (arr2[index] < arr2[j])
            {
                cout<<arr2[j]<<" "<<j<<" "<<endl;
                swap(arr2[index], arr2[j]);
            }
        }
    }
    for (auto i : arr2)
    {
        cout << i << " ";
    }

    return 0;
}