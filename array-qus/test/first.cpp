#include <bits/stdc++.h>
using namespace std;

void countEmployees(vector<int> &employees)
{
    int count = 0;
    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i] > 15, 000)
        {
            count++;
            /* code */
        }
    }

    cout << "total employees " << count;
}

void digit(vector<int> &employees)
{

    int product = 0;
    for (int i = 0; i < employees.size(); i++)
    {
        while (employees[i] > 0)
        {
            product *= employees[i] % 10;
            employees[i] /= 10;
        }
    }

    cout << "product " << product;
}

void lessEmp(vector<int> &employees)
{

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i] > 8000)
        {
            cout << "index " << i << " salary " << employees[i];
            break;
        }
    }
}

void first()
{
    vector<int> employees = {1000, 3, 2, 1, 9000, 4, 3, 4, 3};
    int sum = 0;
    for (auto i : employees)
    {
        sum += i;
    }

    if (sum > 100000)
    {
        countEmployees(employees);
    }
    else if (sum == 100000)
    {

        digit(employees);
    }
    else
    {
        lessEmp(employees);
    }
}

void second()
{

    int a, b;
    cout << "enter the two  number ";
    cin >> a >> b;


if (a>0)
{
   if (b>0)
   {
 cout<<"a b are positive"<<endl;
   }else{
    cout<<"a is positive and b is negative"<<endl;
   }
   
}else
{
   if (b<0)
   {
       cout << "a is negative and b is negative" << endl;
   }else{

       cout << "b is positive and a is negative" << endl;
   }
   
}

}

void third(){

    int angle1, angle2, angle3;

    cout<<"enter the three number";
    cin >> angle1 >> angle2 >> angle3;

    if (angle1 + angle2 + angle3 != 180)
    {
        cout << "The angles do not form a valid triangle." << endl;
       
    }

    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
    {
        cout << "The angles form a right-angled triangle." << endl;
    }
    else
    {
        if (angle1 > 90 || angle2 > 90 || angle3 > 90)
        {
            cout << "The angles form an obtuse triangle." << endl;
        }
        else
        {
            cout << "The angles form an acute triangle." << endl;
        }
    }
}


void four(){
    int x,y;

    cout<<"Enter the x and y value : "<<endl;
    cin >> x >> y;
    if (x > 0)
    {                                                               
        if (y > 0)
        {
            cout << "The point (" << x << ", " << y << ") lies in the first quadrant." << endl;
        }                                                                                                                        
        else if (y < 0)
        {
            cout << "The point (" << x << ", " << y << ") lies in the fourth quadrant." << endl;
        }
        else
        {
            cout << "The point (" << x << ", " << y << ") lies on the positive x-axis." << endl;
        }
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            cout << "The point (" << x << ", " << y << ") lies in the second quadrant." << endl;
        }
        else if (y < 0)
        {
            cout << "The point (" << x << ", " << y << ") lies in the third quadrant." << endl;
        }
        else
        {
            cout << "The point (" << x << ", " << y << ") lies on the negative x-axis." << endl;
        }
    }
    else
    {
        if (y > 0)
        {
            cout << "The point (" << x << ", " << y << ") lies on the positive y-axis." << endl;
        }
        else if (y < 0)
        {
            cout << "The point (" << x << ", " << y << ") lies on the negative y-axis." << endl;
        }
        else
        {
            cout << "The point (" << x << ", " << y << ") is the origin." << endl;
        }
    }
}

void five(){
int num;
cout <<"enter a number" << endl;
cin>>num;
double c = round(cbrt(num));

if (c*c*c==num)
{
   cout<<"its perfect number of cube"; 
}
else{
    cout<<"its not perfect number of cube";
}



}

void six(){

    float n;
    cout <<"enter a number" << endl;
    cin>>n;

    if (n <= 0)
    {
        cout << "The number is not a power of 2." << endl;
    }
    else
    {
        if (n == 1)
        {
            cout << "The number is a power of 2." << endl;
        }
        else
        {
           
                int temp = n;
                while (temp > 1)
                {
                    if (temp % 2 != 0)
                    {
                        cout << "The number is not a power of 2." << endl;
                        return;
                    }
                    temp /= 2;
                }
                cout << "The number is a power of 2." << endl;
            }
        }
    
}

void seven(){
     char c;
     cout << "enter a  character" << endl;
     cin>>c;

     if (c >= '0' && c <= '9')
     {
        cout << c << " is a digit" <<endl;
     }
     else if (c >= 'A' && c <= 'Z')
     {
        cout << c << " is an uppercase letter" <<endl;
     }
     else if (c >= 'a' && c <= 'z')
     {
        cout << c << " is a lowercase letter" <<endl;
     }
     else
     {
        cout << c << " is a special character" <<endl;
     }

}


void BalCount(vector<int> &acc){
    int count = 0;
    for (int i = 0; i < acc.size(); i++)
    {
        if (acc[i] > 10000)
        {
            count++;
      }
      
    }

    cout<<count<<endl;
    
}

vector<int>inc(vector<int> &acc){

    for (int i = 0; i < acc.size(); i++)
    {
        acc[i] +=1000;
    }
    return acc;
}

void find(vector<int> &acc){
    for (int i = 0; i < acc.size(); i++)
    {
        if (acc[i] <5000)
        {
           cout<<acc[i]<<endl;
        }
        
    }
    
}

void Eight(){
    vector<int> acc = {50000};
    int sum=0;
    for(auto i:acc){
        sum += i;

    }
    if (sum > 50000)
    {
        BalCount(acc);
    }else if(sum==50000){
        vector<int> newAcc=inc(acc);
        for(auto i:newAcc){
            cout<<i;
        }
    }
    else{
        find(acc);
    }
    

}


void Nine(){
    for (int i = 1; i <7; i++)
    {
        for (int j = 1; j < i; j++)
        {
          cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}

void ten(){
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{

    // first();

    // second();
    // third();
    // four();
    // five();
    six();

    // seven();

    // Eight();


    // Nine();

    // ten();



    return 0;
}