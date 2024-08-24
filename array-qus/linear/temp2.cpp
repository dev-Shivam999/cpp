#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> arr2 = {"red",
                           "green",
                           "blue",
                           "red",
                           "green",
                           "blue",
                           "red",
                           "green",
                           "blue",
                           "red",
                           "green",
                           "blue"};
    int red = 0, green = 0, blue = 0;

    for (auto i : arr2)
    {
        if (i == "red")
        {
            red++;
        }
        if (i == "blue")
        {
            blue++;
        }
        if (i == "green")
        {
            green++;
        }
    }

    arr2.clear();

    for (int i = 0; i < red; i++)
    {
        arr2.push_back("red");
    }

    for (int i = red; i < blue+red; i++)
    {
        arr2.push_back("blue");
    }

    for (int i = red + blue; i < green + red + blue; i++)
    {
        arr2.push_back("green");
    }

    for (int i = 0; i < arr2.size(); i++)
    {
     cout<<arr2[i]<<"";
    }
    
    
    

    return 0;
}