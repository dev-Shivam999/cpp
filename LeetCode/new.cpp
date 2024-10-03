#include <bits/stdc++.h>
using namespace std;

int main()
{

    //     vector<vector<int>> arr = {{1, 2, 3},
    //                                {4, 5, 6},
    //                                {9, 8, 9}};
    // int sum = 0, sum2 = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     sum += arr[i][i];
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //      sum2 += arr[i][arr.size() - 1 - i];
    // }
    // cout << sum << endl
    //      << sum2 << endl;

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 4 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "#";
    //     }
    //     cout << "\n";
    // }
    // vector<int> arr2 = {7 ,69, 2 ,221 ,8974};
    // int min = arr2[0], max = arr2[0];
    // int sum=arr2[0];
    // for (int i =1; i < arr2.size(); i++)
    // {
    //     sum+=arr2[i];
    //     if(min>arr2[i]){
    //         min=arr2[i] ;
    //     }
    //  if (max<arr2[i]){
    //  {
    //     max=arr2[i];
    //  }

    // }
    // }
    // cout<<sum-min<<" "<<min<<" "<<sum-max<<" "<<max<<" "<<sum<<endl;

    // vector<int> arr = {3, 2, 4, 4, 3, 7, 5, 5, 4, 7};
    // int max = arr[0], count = 0;

    // for (int i = 1; i < arr.size(); i++)
    // {

    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == max)
    //         count++;
    // }

    // cout << count;
    // string str="7:05:46";

    // for (int i = 0; i <1; i++)
    // {
    //   int a=stoi(str[i]);
    //   int b=a+12;
    //   string o=to_string(b);
    //   str[i]=o;

    // }

    // cout<<str<<endl;

    // vector<int>grades={24,55,78,65,76,48};

    // for (int i = 0; i < grades.size(); i++)
    // {
    //     if (grades[i] > 37)
    //     {
    //         int num = 0;
    //         for (num = 0; num < grades[i]; num+=5)
    //         {
    //         }
    //         if (num > grades[i] && num - grades[i] < 3)
    //         {
    //             grades[i] = num;
    //         }
    //     }
    // }

    // return grades;

    // int x1 = 0, v1 = 3, x2 = 4, v2 = 2;
    // int co1=0,co2=0;
    // for (int i = x1; i <=12; i+=v1)
    // {
    // co1++;
    // }
    // for (int i = x2; i <=12; i+=v2)
    // {
    // co2++;
    // }
    // (co1==co2)?cout<<"YES":cout<<"NO";

    // vector<int> nums = {5, 6, 7, 7, 8, 8};
    // int target = 7;
    // vector<int> arr(2, -1);

    // int s = 0, e = nums.size() - 1;

    // while (s <= e)
    // {
    //     int mid = (s + e) / 2;
    //     if (nums[mid] > target)
    //     {
    //         e = mid - 1;
    //     }
    //     else if (nums[mid] < target)
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {

    //         if (nums[mid + 1] == nums[mid])
    //         {
    //             arr[0] = mid;
    //             arr[1] = mid + 1;
    //             break;
    //         }
    //         else if (nums[mid - 1] == nums[mid])

    //         {
    //             arr[1] = mid;
    //             arr[0] = mid - 1;
    //             break;
    //         }
    //         else
    //         {
    //             arr[1] = mid;
    //             arr[0] = mid;
    //         }
    //     }
    // }
    // for (auto i : arr)
    // {
    //     cout << i << ' ';
    // }

//    vector<int>arr={2,3,4,4,5,5,6,6};
//    int target = 4;
    
//             int firstPosition = -1, lastPosition = -1;
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 if (arr[i] == target)
//                 {
//                     firstPosition = i;
//                     break;
//                 }
//             }
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 if (arr[i] == target)
//                 {
//                     lastPosition = i;
//                 }
//             }
//            cout<<lastPosition<<" "<<firstPosition;
    


    // int s=7,t=10,a=4,b=12;
    // vector<int>app={2,3,-4};
    // vector<int>orn={3,-2,-4};

    // for (int i = 0; i <app.size(); i++)
    // {
    //     app[i]=app[i]+a;
    //     orn[i]=orn[i]+b;
    // }
    

    // for (int i = 0; i < app.size(); i++)
    // {
    //     cout<<app[i]<<"\n";
    //     cout<<orn[i]<<'\n';

    // }
int a=100,b=999,c=500;

    if (a < b&&b< c)
    {
        cout << b << "lol";
    }
    else if (c < b&&b < a)
    {
        cout << b << "\n";
    }
    else if (a < c&&c < b)
    {
        cout << c << "\n";
    }
    else if (b < a&&a < c){
        cout << a << "\n";}
    else if (c < a&&a < b){
        cout << a << "\n";}
    else if (b < c&&c < a){
        cout << c << "\n";}
 

    return 0;
}