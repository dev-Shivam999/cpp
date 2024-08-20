#include<bits/stdc++.h>
using namespace std;

int main(){
// int size;
// cout<<"give me arr size"<<endl;
// cin >> size;
// int s[size];

// for (int i = 0; i <= size-1; i++)
// {
//     cout<<i<<" give value";
//     cin >> s[i];
//     /* code */
// }
// for (int i = 0; i <= size - 1; i++)
// {
//     cout << s[i] ;
//     /* code */
// }



int size;
cout<<"size: ";
cin >> size;

int s[size];

for (int i = 0; i <=size-1; i++)
{
    /* code */
    cout<<"array value "<<i<<" : ";
    cin >> s[i];
}
int sum=0;

for (int i = 0; i <= size - 1; i++)
{
    /* code */
   sum+=s[i];
    cout<<"array value : "<<s[i]<<endl;
}

// for (int i = 0; i < size; i++)
// {
//     if (s[i]%2==0 )
//     {
        
//     cout<<"array value even : "<<s[i]<<endl;
//     }
    
// }

// for (int i = 0; i < size; i++)
// {
//     if (s[i] % 2 != 0)
//     {

//         cout << "array value odd : " << s[i] << endl;
//     }
// }

int min=s[0],max=s[0];
int se;
for (int i = 0; i < size; i++)
{
    if (min>s[i])
    {
        min=s[i];
    }
    if (max<s[i]){ 
        se=max;
        max=s[i];
        }

    
}

cout<<min<<" "<<se<<" "<<max<<endl;


cout<<"array sum : "<<sum;


return 0;
}