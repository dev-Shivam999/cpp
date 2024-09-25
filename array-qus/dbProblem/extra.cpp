#include<bits/stdc++.h>

void findCombinations(vector<int> &values, int target, int currentSum,vector<int> &currentCombo,vector<vector<int>> &result)
{
    if (currentSum == target)
    {
        result.push_back(currentCombo);
        return;
    }
    if (currentSum > target)
    {
        return;
    }
    for (int i = 0; i < values.size(); i++)
    {
        currentCombo.push_back(values[i]);
        findCombinations(values, target, currentSum + values[i], currentCombo, result);
        currentCombo.pop_back();
    }
}

int main()
{
   vector<int> values = {500, 100, 200, 50, 20, 10, 5, 1};
    int target = 576;
   vector<int> currentCombo;
   vector<vector<int>> result;
    findCombinations(values, target, 0, currentCombo, result);
    for (const auto &combo : result)
    {
        for (int val : combo)
        {
           cout << val << " ";
        }
       cout <<endl;
    }
    return 0;
}