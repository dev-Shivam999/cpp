#include <bits/stdc++.h>
using namespace std;

// int isPrime(int x) { 
//     if (x<2) return false;
    
    

//     for (int i = 2; i <x; i++)
//     {
//         /* code */
//     }
    
// }

int main()
{

    // int num = 2;

    // int i = 2;
    // while (i <num/2)
    // {
    //     i *= 2;
    // }

    // cout << i << endl;




// int num2=4;
// int i=0;
// while (num2>1)
// {i++;
//     num2=num2/2;
// }

// cout<<i;

// int n =10;
// int p2=1,p3=1;
// while(p2<=n){
// p2*=2;
// }
// while (p3<=n)
// {
//    p3*=3;
// }

// cout<<p2<<" "<<p3<<endl;



// int nm=321;

// int di=0;
// while (nm!=0)
// {
//     nm/=10;
//     di++;
// }


// cout<<di;


// int num4=17;

// int i=1;
// while (i<num4/2)
// {
//     if (i)
//     {
       
//     }
    
   
// }







int num5=153;
int temp =num5,count=0;


while (temp!=0)
{
    count++;
    temp = temp/10;

}
int rem =0;
int p=num5;
while (num5!=0)
{
    int lol=num5%10;
    int l=1;
    int cp=count;
    while (cp){
        l*=lol;
        cp--;
    }
    rem+=l;

    num5/=10;
}

if (rem==p)
{
    cout<<"ok"<<rem<<" "<<p<<endl;
}else{
    cout<<"not 0k"<<rem<<" "<<p<<endl;
}




    return 0;
}