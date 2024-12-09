#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> A = {1, 3, 5};

    vector<int> B = {2, 4, 6};
    vector<int> C;
    int j = 0;
    int i = 0;
    while (i < A.size())
    {
        if (A[i] < B[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(B[j]);
            j++;
        }
    }

    for (auto it : C)
    {
        cout << it << " ";
    }

    return 0;
}