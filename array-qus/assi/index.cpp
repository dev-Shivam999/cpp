#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 3)
        {
            return i;
        }
    }
    return -1;
}

void max(vector<int> &arr)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (min > arr[i])
            min = arr[i];
    }
    cout << max << " " << min << endl;
}

int l(vector<int> &arr)
{
    int count = arr.size() + 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 8)
        {
            count = arr[i];
        }
    }
    if (count < arr.size())
    {
        return count;
    }
    else
    {
        return -1;
    }
}

void co(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 3)
        {
            break;
        }
        count++;
    }

    cout << count;
}

vector<int> gre(vector<int> &arr)
{
    vector<int> a;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 6)
        {

            a.push_back(arr[i]);
        }
    }
    return a;
}

int re(vector<int> &arr)
{
    int ele = 11;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele)
        {
            count++;
        }
    }
    if (count == 0)
        return -1;
    else
        return count;
}

void unique(vector<int> &arr)
{

    int count = 0;

int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
     sum+=arr[i];

        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {

                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
    }
    

    cout<<"sum of "<<sum <<endl;
    if (count == 0) cout<<true;
    else cout<<false;
   
    
}

int main()
{

    vector<int> arr = {1, 4, 3, 2, 6, 5, 8, 7, 9, 11};

    // int a=f(arr);

    // max(arr);

    // int b=l(arr);
    // cout<<b<<endl;

    // co(arr);

    // vector<int>a=gre(arr);

    // int n = re(arr);
    // cout<<n<<endl;

    // unique(arr);

    

    return 0;
}