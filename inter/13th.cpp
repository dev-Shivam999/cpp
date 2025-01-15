#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

bool isPalindrome(int num)
{
    if (num <= 10)
    {
        return false;
    }

    int size = 0, temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        size = size * 10 + rem;
        temp /= 10;
    }
    if (size == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isArmstrong(int num)
{
    if (num < 10)
    {
        return true;
    }

    int temp = num, count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    int sum = 0;

    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    return sum == num;
}


int main()
{

    // int arr1[] = {4, 2, 7, 5, 8};
    //     int size = sizeof(arr1) / sizeof(arr1[0]);
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (isPrime(arr1[i]))
    //             cout << arr1[i] << "Is prime number " <<endl;
    //         else
    //         {
    //             cout << arr1[i] << " is not prime "<<endl;
    //         }
    //     }

    //     int arr2[] = {44, 22, 17, 45, 8};
    //     int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // for (int i = 0; i <size2; i++)
    // {
    //     if (isPalindrome(arr2[i]))
    //     {
    //         cout<<arr2[i]<<" is Palindrome"<<endl;
    //     }else{
    //         cout<<arr2[i]<<" is not Palindrome"<<endl;
    //     }

    // }

    // int arr3[]={44,323,875,4};
    // int size3=sizeof(arr3)/sizeof(arr3[0]);
    // for (int i = 0; i < size3; i++)
    // {
    //     if(isArmstrong(arr3[i])){
    //         cout<<arr3[i]<<"is armstrong"<<endl;
    //     }else{
    //         cout<<arr3[i]<<" is not armstrong"<<endl;
    //     }
    // }

    // int arr4[] = {1, 2, 3, 4, 5, 6};
    // int size4 = sizeof(arr4) / sizeof(arr4[0]);

    // int newarr4[size4 - 1];
    // for (int i = 0; i < size4; i++)
    // {
    //     newarr4[i] = i * arr4[i];
    // }



    return 0;
}