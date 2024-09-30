#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {2, 1, 5, 9, 3, 6, 4};
    for (int i = 1; i < arr.size(); i++)
    {
  

        for (int j = i - 1; j >= 0; j--)
        {
            
            if (arr[j] > k)
            {

                swap(arr[j + 1], arr[j]);
            }
            for (auto i : arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }

       
    }

    return 0;
}