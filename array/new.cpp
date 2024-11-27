#include<iostream>
using namespace std;

int main(){
int arr[6]={1,2,3,3,2,3};
int count=5;
for (int i = 0; i < 4; i++)
{
  swap(arr[i],arr[count]);
  count--;
}
for (int i = 0; i < 6; i++)
{
 cout<<arr[i];
}

return 0;
}