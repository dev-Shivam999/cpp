#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 7, 3, 5, 4};
    for (int i = 0; i < arr.size(); i++)
    {
        int min = arr[i];
        int in = i;
        for (int j = i + 1; j < arr.size() ; j++)
        {
            cout<<arr[j]<<" \n";
            if (min > arr[j])
            {
                min = arr[j];
                cout << min << endl;
                in = j;
            }
            for (auto i : arr)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        swap(arr[i], arr[in]);
    }

    for (auto i : arr)
    {
        cout << i << "";
    }
    return 0;
}