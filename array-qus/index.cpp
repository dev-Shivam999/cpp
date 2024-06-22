#include <iostream>
#include <vector>

using namespace std;

vector<int> ele(vector<int> &arr)
{
    // Check if the array has less than 3 elements
    if (arr.size() < 3)
    {
        return {}; // Return an empty vector if there are less than 3 elements.
    }

    // Initialize first, second, and third to the smallest possible integer value
    int first = arr[0], second = arr[1], third = arr[2];

    // Traverse the array to find the three largest elements
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    // Return the three largest elements in descending order
    return {first, second, third};
}

int main()
{
    vector<int> arr = {12, 23, 34, 56, 78, 67, 87};
    vector<int> a = ele(arr);

    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}
