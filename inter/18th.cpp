#include <bits/stdc++.h>

using namespace std;

int findMajorityElement(const vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    // vector<int> arr = {3, 3, 4, 2, 3, 3, 3};
    // int majorityElement = findMajorityElement(arr);

    // if (majorityElement == -1)
    // {
    //     cout << "No" << endl;
    // }
    // else
    // {
    //     cout << "Yes " << majorityElement << endl;
    // }

    //     vector<int> def = { 10, 3, 6, 8, 15,5};

    // int currentDeferent = 0,maxDeferent =0;
    //     for (int i = 0; i < def.size()-1; i++)
    //     {
    //         currentDeferent = def[i] - def[i+1];
    //       maxDeferent = max(maxDeferent,currentDeferent);

    //     }

    //     cout<<maxDeferent<<endl;

    // vector<int> Peak = {1,
    //                     3,
                        
    //                     4,
    //                     5,
    //                     20,
    //                     4,
    //                     1,
    //                     0};

    // for (int i = 1; i < Peak.size() - 1; i++)
    // {
    //     if (Peak[i] > Peak[i - 1] && Peak[i] > Peak[i + 1])
    //     {
    //         cout << Peak[i] << endl;
    //         break;
    //     }
    // }

    // vector<int> appear = {4, 3, 2, 7, 8, 2, 3, 1};

    // vector<int>Dup;

    // for (int i = 0; i < appear.size(); i++)
    // {
    //     for (int j = 0; j < appear.size(); j++)
    //     {
    //        if (i != j){
    //             if (appear[i] == appear[j]){
    //                  Dup.push_back(appear[i]);
    //             }
    //        }
    //     }
        
        
    // }

    // for(auto it :Dup)  {
    //     cout<<it<<" ";
    // }

    vector<int> nums = {1, 4, 7, 11, 15};

    int left = 0, target=12;
    int right = nums.size() - 1;

    while (left < right)
    {
        int currentSum = nums[left] + nums[right];
        if (currentSum == target)
        {
            cout<<"true";
            break;
        }
        else if (currentSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

   

    return 0;

}
