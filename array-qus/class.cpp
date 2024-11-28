#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0,
                        0,
                        1,
                        1,
                        1,
                        2,
                        2,
                        3,
                        3,
                        4};

    vector<int> another;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (another.size() < 1)
        { 
            another.push_back(nums[i]);
        }
        else
        {

            for (int j = 0; j < another.size(); i++)
            {
                if (another[j]!=nums[i])
                {
                another.push_back(nums[i]);
                }
                
            }
        }
    }
    for(auto it:another){
        cout<<it<<" ";
    }
    return 0;
}