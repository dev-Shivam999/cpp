#include <bits/stdc++.h>
using namespace std;
vector<int> DE(vector<int> &arr)
{
    vector<int> NewAr;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            NewAr.push_back(arr[i] * 2);
        }
        else
        {
            NewAr.push_back(arr[i]);
        }
    }
    return NewAr;
}
struct p
{
    int age;
    string name;
    /* data */
};

vector<int> Age(vector<p> &arr)
{
    vector<int> NewArr;
    for (int i = 0; i < arr.size(); i++)
    {
        NewArr.push_back(arr[i].age);
    }
    return NewArr;
}
vector<int> N(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i] + i;
    }
    return arr;
}

void Comp(vector<int> &arr, vector<int> &arr2)
{
    vector<int> Ar;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                Ar.push_back(arr2[i]);
            }
        }
    }

    for (auto it : Ar)
    {
        cout << it << " ";
    }
}

void Pal(vector<int> &arr)
{
    int size = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[size])
        {
            cout << "not";
            break;
        }
        size--;
    }
}

void Rotate(int &x, vector<int> &arr)
{
    int l = arr.size() - x;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin() + x, arr.end());
    reverse(arr.begin(), arr.end() - l);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{

    // vector<int> V1={1,2,3,4,5,6,7};
    // vector<int>O1=DE(V1);

    // vector<p>Per={{12,"jkf"}};
    // vector<int>Per1=Age(Per);

    // vector<int> NS = N(V1);

    // vector<int> ro = {1, 2, 3, 4, 5};
    // int k = 2;
    // Rotate(k, ro);

    // vector<int> com1 = {1, 2, 3, 4, 5, 6};
    // vector<int> com2 = {8, 2, 3,2,3, 10, 0, 6};
    // Comp(com1, com2);

    // vector<int>pal={1,2,1};
    // Pal(pal);

    return 0;
}