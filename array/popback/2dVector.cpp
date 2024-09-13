#include<iostream>
using namespace std;

int main(){
    vector<int>arr={1,10,2,10,2,10,3,10,4};
    int ten=0;

vector<int>arr2;
    for (int i = 0; i < arr.size(); i++)
    {
if (arr[i]==10)
{
  ten++;
}else{
    arr2[i]=arr[i];
}


    }

    for(auto it:arr2){
        cout<<it;
    }
    
return 0;
}
