#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     int target=4;
    //     vector<int> nums={1,2,3,2,1};
    //      for (int i = 0; i < nums.size(); i++)
    //     {
    //         for (int j = 0; j < nums.size(); j++)
    //         {
    //             if (i != j)
    //             {
    //                 if (nums[i] + nums[j] == target)
    //                 {
    //                     nums.clear();
    //                     nums.push_back(i);
    //                     nums.push_back(j);
    //                     break;
    //                 }
    //             }
    //         }
    //   }

    //   for(auto it:nums){
    //     cout<<it<<endl;
    //   }

    // int n = 14;
    // vector<string>buzz;

    // for(int i=1; i<=n; i++){
    //    if (i%3==0)
    //    {
    //     buzz.push_back("Fizz");
    //    }else if (i%5==0){
    //     buzz.push_back("Buzz");
    //    }else{
    //     buzz.push_back(to_string(i));
    //    }

    // }

    //   for(auto i:buzz){
    //     cout << i <<" ";
    //   }

    // int haf = n / 2;
    // string a = "not lol";

    //     while (n != 0)
    // {
    //     {
    //         if ((haf) * (haf) > n)
    //         {
    //             haf = (1 + haf) / 2;
    //             n /= 2;
    //         }
    //         if (haf * haf == n&&n>1)
    //         {
    //             cout<<haf << endl;
    //             a = "lol";
    //             break;
    //         }
    //     }
    // }
    // cout<<a;

    // for (int i = 1; i < n; i++)
    // {
    //   for (int j = 1; j <i; j++)
    //   {
    //     if (i%j==0)
    //     {
    //       if (i*j==n){
    //         cout<<" "<<i<<" "<<j<<endl;

    //          cout<<true<<endl;
    //          break;
    //          }

    //     }else{
    //         if (i * j == n) {
    //             cout<<" "<<i<<" "<<j<<endl;
    //             cout << false<<" "<<"False"<<endl;
    //             break;
    //             }
    //     }

    //   }

    // }

    // if (2 * 3 == n)
    //     return true;
    // else if (2 * 5 == n)
    //     return true;
    // else if (2 * 3 * 5 == n)
    //     return true;
    // else if (3 * 5 == n)
    //     return true;
    // else if (3 * 3 == n)
    //     return true;
    // else if (2 * 2 == n)
    //     return true;
    // else if (5 * 5 == n)
    //     return true;
    // else
    //     return false;

    // vector<int> perfect;

    // for(int i=1;i<n;i++){

    // if (i*i<n)
    // {
    //     perfect.push_back(i*i);
    // }

    // }

    // int c=0;
    // while(c!=n){
    // if (c<=n)
    // {
    //     c += perfect[perfect.size() - 1]
    // }

    // }

    // vector<string> timePoints = {"00:00","23:59", "00:00"};

    // vector<int> mini;
    // for (int i = 0; i < timePoints.size(); i++)
    // {
    //     string minit = timePoints[i].substr(3);
    //     string hour = timePoints[i].substr(0, 2);
    //     mini.push_back((stoi(minit) + (stoi(hour) * 60)));
    // }

    // sort(mini.begin(), mini.end());

    // int a = INT_MAX;
    // for (int i = 0; i < mini.size() - 1; i++)
    // {
    //     int def = mini[i + 1] - mini[i];
    //     a = min(mini[i], a);
    // }
    // int no =1+ min(a, 24 * 60 - mini[mini.size() - 1] + mini[0]);
    // cout << no << endl;

    // int n = 20;

    // if (n <= 2)
    // {
    //     return 0;
    // }
    // vector<int> ver(n, 0);
    // ver[0] = ver[1] = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     for (int j = 2; j < i; j++)
    //     {

    //         if (i % j == 0)
    //         {

    //             if (j != 1)
    //             {
    //                 ver[i] = 1;
    //                 break;
    //             }
    //         }
    //     }
    // }

    // for (int i = 0; i < ver.size(); i++)
    // {
    //  if (ver[i] !=1)
    //  {
    //        cout<<ver[i]<<" "<<i<<endl;
    //     /* code */

    //  }

    // }
//        int n = 6464;
//    int rem=0;
//     while (n > 4)
//     {
//         int p = 0; rem = 0;
//         while (n > 0)
//         {
//             p = n % 10;
//             rem = rem + p * p;
//             n /= 10;
//         }
//         n = rem;
//         cout << n << endl;
//     }
//     cout << rem << endl;

    return 0;
}
