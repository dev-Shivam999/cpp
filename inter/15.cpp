//
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> dup = {1, 2, 3, 1, 3, 2, 3, 2, 3, 2, 3, 12, 3};
    vector<int> NewArray;
    for (int i = 0; i < dup.size(); i++)
    {
        if (NewArray.size() < 1)
        {
            NewArray.push_back(dup[i]);
        }
        else
        {
            int flag = 0;
            for (int j = 0; j < NewArray.size(); j++)
            {
                if (NewArray[j] == dup[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                NewArray.push_back(dup[i]);
            }
        }
    }

    int sum = 0;
    for (auto it : NewArray)
    {
        sum += it;
        cout << it << " ";
    }
    cout << "\n"
         << "sum : " << sum << endl;
    return 0;
}