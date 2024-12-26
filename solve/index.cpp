#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string a="121";

    // for (int i = 0; i <a.size()/2; i++)
    // {
    //     if( a[i]!=a[a.size()-1-i] ){
    //         cout << "not  palindrome";
    //          break;
    //     }
    // }

    vector<int> arr = {1, 2, 4, 5, 6, 11, 99, 1000};
    int t = 41;

    int st = 0;
    int p=1;
    int end = arr.size() - 1;
    while (st <= end)
    {
        int tmp = (st + end) / 2;
        if (arr[tmp] == t)
        {
            cout<<arr[tmp]<<" "<<tmp;
            p=0;
            break;
        }else if (arr[tmp]>t){
            end = tmp;
        }else if (arr[tmp]<t){
            st = tmp;
        }
    }

   (!p)?cout<<"ji":cout<<"not";

    return 0;
}