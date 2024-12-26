#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr1={2,5,8,9,10};
int arra[] = {2, 5, 8, 9, 10} ;
int arrb[] = {1, 4, 3, 11};
int size1=sizeof(arra)/sizeof(arra[0]);
int size2=sizeof(arrb)/sizeof(arrb[0]);

vector<int> arr2 = {1, 4, 3, 11};
// vector<int >arr3;
int arr3[size1-1+size2-1];
int j =0;
int i = 0;
int k=0;
while (i < size1 && j < size2)
{
    if (arrb[j]>arra[i]){
        arr3[k]=arra[i];
        i++;
    }else{
        arr3[k]=arrb[j];
        j++;
    }
    k++;
   
}

while (j<size2)
{
    arr3[k]=arrb[j];
    j++;
    k++;
}
while (i<size1)
{
    arr3[k]=arra[i];
    i++;
    k++;
}

for(int it=0;it<size2+size1;it++){
    cout<<arr3[it]<<" ";
}


return 0;
}