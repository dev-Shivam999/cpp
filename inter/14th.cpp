#include <bits/stdc++.h>
using namespace std;
void Sq(int arr[], int size)
{
    int newArr[size - 1];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i] * arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << newArr[i] << " " << endl;
    }
}

void cumulative(int arr[], int size)
{

    int newArr[size - 1];
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        newArr[i] = temp + arr[i];
        temp += arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << newArr[i] << " ";
    }
}

void Odd(int arr[], int size)
{
    int newArr[size - 1];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            newArr[i] = arr[i];
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < count; i++)
    {
        cout << newArr[i] << endl;
    }
}

void mult(int arr[], int size, int x)
{
    vector<int> newArr;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % x == 0)
        {
            newArr.push_back(arr[i]);
        }
    }

    for (auto it : newArr)
    {
        cout << it << " ";
    }
}

void Double(int arr[], int size)
{
    int newArr[size - 1];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i] * 2;
    }

    for (int i = 0; i < size; i++)
    {
        cout << newArr[i] << " ";
    }
}

void Reverse(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Digit(int arr[], int size)
{

    vector<int> newArr;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 10)
        {
            newArr.push_back(arr[i]);
        }
        else
        {
            while (arr[i] != 0)
            {
                int temp = arr[i] % 10;
                newArr.push_back(temp);
                arr[i] = arr[i] / 10;
            }
        }
    }
    cout << newArr.size() << endl;
    for (auto it : newArr)
    {
        cout << it << " ";
    }
}

void PosNeg(int arr[], int size)
{
    vector<int> Pos;
    vector<int> Neg;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            Neg.push_back(arr[i]);
        }
        else
        {
            Pos.push_back(arr[i]);
        }
    }

    for (auto it : Pos)
    {
        cout << it << ' ';
    }
    cout << '\n';
    for (auto it : Neg)
    {
        cout << it << ' ';
    }
    cout << '\n';
}

void Prime(int arr[], int size)
{
    vector<int> NewArr;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 2)
        {
            continue; 
        }

        bool isPrime = true;
        for (int j = 2; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            NewArr.push_back(arr[i]); 
        }
    }

    for (auto it : NewArr)
    {
        cout << it << " ";
    }
}

void Deff(int arr[],int size){
    vector<int>NewArr;

    for (int i = 0; i < size-1; i++)
    {
        int temp = arr[i]-arr[i+1];
        NewArr.push_back(temp);
    }

    for(auto it:NewArr){
        cout<<it<<" ";  
    }
    
}
int main()
{

    int arr[] = {1, 2, 3, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Sq(arr, size);
    // cumulative(arr, size);
    // Odd(arr, size);
    // mult(arr, size,5);
    // Double(arr, size);
    // Reverse(arr, size);
    // Digit(arr, size);
    // PosNeg(arr, size);
    // Prime(arr, size);
    // Deff(arr, size);

    return 0;
}