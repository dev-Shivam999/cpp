#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 1, 2};

    vector<int> newARR;
    for (int i = 0; i < nums.size(); i++)
    {
        if (newARR.size() < 1)
        {
            newARR.push_back(nums[i]);
        }

        else
        {
            bool found = false;
            for (int j = 0; j < newARR.size(); j++)
            {
                if (newARR[j] == nums[i])
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                newARR.push_back(nums[i]);
            }
        }
                           
                         }
                         
                         cout<<newARR.size()<<endl;

    return 0;
}