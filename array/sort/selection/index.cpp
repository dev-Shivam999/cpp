#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, , 3, 4, 5, 6, 2, 7, 9, 10, 8};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;
    return 0;
}