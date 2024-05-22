#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr={1,2,3,4,5,6};


// int tem=arr[0];//shell o copy 
// arr[0]=arr[4];
// arr[4]=tem; //temp memory use compile time memory


// run time memory
// int *temp=new int ;
// *temp=arr[0];
// arr[0]=arr[4];
// arr[4]=*temp;
// delete temp;

// not creat memory
// arr[0]=arr[4]+arr[0];
// arr[4]=arr[0]-arr[4];
// arr[0]=arr[0]-arr[4];

// other way
// arr[0]=arr[4]^arr[0];
// arr[4]=arr[0]^arr[4];
// arr[0]=arr[0]^arr[4];




// for (int i = 0; i <=5; i++)
// {
//     cout<<arr[i]<<"\n";
// }


for (int i = 0; i <arr.size(); i++)
{
   if(arr[i]%2==0){
    arr[i]=arr[i]*2;
   }
   cout<<arr[i]<<" ";
}


return 0;
}