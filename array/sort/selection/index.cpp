#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 2, 5,4,6,7,8,9,11};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        cout << arr[i] << " ";
    }
    cout << "\n"
         << "sum = " << sum;

    cout << "\n";

    // int min = arr[0], max = arr[0];
    // for (int i = 1; i < arr.size(); i++)
    // {

    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << "\n"
    //      << "min = " << min << " max = " << max;

    for (int j = 0; j < arr.size(); j++)
    {
        int mini = arr[j];
        int index = j;
        for (int i = j + 1; i < arr.size(); i++)
        {
            if (arr[i] < mini)
            {
                mini = arr[i];
                index = i;
            }
        }
        swap(arr[j], arr[index]);
      
    }
    cout << "\n";

    for (auto i : arr)
    {
        cout << i << ' ';
    }

    int n = arr[arr.size() - 1];
    int num = n * (n + 1) / 2;

    cout
        << "\n"
        << "missing : " << num-sum<<"\n";

 


        vector<char> arr2 = {'A', 'B', 'D', 'E', 'F', 'H', 'I'};

        for (int i = 0; i < arr2.size(); i++)
        {
            char max = arr2[i];
            int index = i;

            for (int j = i + 1; j < arr2.size(); j++)
            {
                if (max > arr2[j])
                {
                    max = arr2[j];
                    index = j;
                }
            }

            swap(arr2[i], arr2[index]);

        }

        for (auto it : arr2)
        {
            cout << it << " ";
        }

        return 0;
    }