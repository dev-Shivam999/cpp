#include <bits/stdc++.h>
using namespace std;

int main()
{

//

int arr[] = { 10,
            20,
            30,
            40,
            50 };
            int p=3;
            int size=sizeof(arr)/sizeof(arr[0]);
            
            for (int i =p ; i <size-1 ; i++)
            {
                arr[i] = arr[i+1];
            }
            
            for (int i = 0; i <size-1; i++)
            {
                cout<<arr[i]<<" ";
            }
            
             return 0;
}