#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3,5, 4, 5, 6};
    int key = 5;
    int i;
    for ( i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            break;
        }
    }

   if (i!=arr.size())
    cout<<"mil gaya";
   else
    cout<<"nhi mil aa ";
   
   

    return 0;
}