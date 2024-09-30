#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,4,6,8,10};

    int s = 0, e = arr.size() - 1, t = 8,mind;


    while (s <= e)
    {
         mind = (s + e) / 2;
        if (arr[mind] > t)
        {
            e = mind - 1;
        }
        else if (arr[mind] < t)
        {
            s = mind + 1;
        }
        else
        {
            cout << mind << " " << arr[mind] << endl;
            break;
        }
    }

    return 0;
}