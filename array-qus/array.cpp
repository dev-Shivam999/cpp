#include <bits/stdc++.h>
using namespace std;
// int max(vector<int> &arr)
// {
//     int a = arr[0];
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (a < arr[i])
//         {
//             a = arr[i];
//         }
//     }
//     cout << a;
// }

// int maxThreeSecond(vector<int> &arr){
//     int a=arr[0],b=0,c=0;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (a < arr[i])
//         {
//            c=b;
//            b=a;
//            a=arr[i];
//         }

//     }
//     cout<<c<<" "<<b;
// }

// int minSecond(vector<int> &arr)
// {
//     int a = arr[0], b = 0;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (a > arr[i])
//         {
//             b = a;
//             a = arr[i];
//         }
//     }
//         cout << " " << b;
// }

// int digitCount(int a)
// {
//     int b = a, c = 0,d;
//     while (b != 0)
//     {
// d=b%10;
//         b = b /10;
//         if (d != 0)
//         {
//             c++;
//         }
//     }
//     return c;
// }

// vector<int> signification(vector<int> &arr)
// {

//     vector<int> newArr;

//     digitCount(100);
//         for (int i = 0; i < arr.size(); i++)
//         {
//         int c = digitCount(arr[i]);

//             if (c>=2)
//             {
//                 newArr.push_back(arr[i]);

//             }
//         }

//         return newArr;
// }

// int frequent(vector<int> &arr)
// {

//     vector<int> size;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int count = 0;
//         for (int j = arr.size(); j >=0 ; j--)
//         {
           

//             if (arr[i] == arr[j])
//             {

//                 count++;
//             }
//         }
//         size.push_back(count);
//     }
//     int min = size[0];
//     for (int i = 0; i < size.size(); i++)
//     {
//         if (min <= size[i])
//         {
            
//             min = i;
//         }
//     }
//     cout <<endl<<arr[min] << endl;
// }




int main()
{
    vector<int> arr = {2, 1, 2, 3, 4, 2, 3, 4};
    // max(arr);
    // maxThreeSecond(arr);
    // minSecond(arr);
    // vector<int> newArr =  signification(arr);
    // for (int i = 0; i < newArr.size(); i++)
    // {
    //     cout<<" "<<newArr[i];
    // }

    // frequent(arr);

    return 0;
}