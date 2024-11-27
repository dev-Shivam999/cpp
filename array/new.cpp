#include<iostream>
using namespace std;

int main(){
int arr[3]={1,2,3};
int count=0;
for (int i = 0; i < 3; i++)
{
   if(arr[i]==4) count++;
}
cout<<count;
return 0;
}