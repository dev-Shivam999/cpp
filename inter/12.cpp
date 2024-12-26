#include <bits/stdc++.h>
using namespace std;

// bool five(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 5 != 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

void Print(int arr[],int size){

    for(int i =0;i<size;i++){
        cout<<arr[i] <<" ";
    }
}

int main()
{
    int arr[] = {5, 10, 15, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // bool a = five(arr, size);               
    // (a) ? cout << "divisible" : cout << "not divisible";


    // int arr2[size-1];

    // for (int i = 0; i < size; i++)
    // {   int sum =0;
    //     for (int j = 0; j <=i; j++)
    //     {
    //         sum += arr[j];
            
    //     }
    //     arr2[i] = sum;
        
    // }

    // Print(arr2,size);


    // int arr3[size-1-1];

    // for (int i = 0; i < size; i++)
    // {
    //     arr3[i] = arr[i]*arr[i]+arr[i+1]*arr[i+1];
    // }

    // Print(arr3,size-1);
    

    


    // int arr4[size-1];
    // for (int i = 0; i <size; i++)
    // {
    //     arr4[i] = i*arr[i];
    // }

    // Print(arr4, size);



int arr5[size/2]={0};
// int j = 0;

// for (int i = 0; i < size; i++)
// {
//    if(i%2!=0){
//         arr5[j] = arr[i];
//         j++;

//     }
// }

// cout<<"\n";
// Print(arr5,size/2);






    // int arr6[size-1];

    // for (int i = 0; i < size; i++)
    // {
    //     arr6[i] = 2*arr[i];
    // }
    
    // Print(arr6,size);


    // int arr7[size-1];
    // for (int i = 0; i <size; i++)
    // {
    //     if (arr[i]>100)
    //     {
    //       arr[i] = 100;
    //     }
        
    // }
    // bool arr8[size-1];

    // for (int i = 0; i <size; i++)
    // {
    //     if (arr[i]%2==0)
    //     {
    //         arr8[i] = true;
    //     }else{
    //         arr8[i] = false;
    //     }
        
    // }
    
    


    
    return 0;
}
