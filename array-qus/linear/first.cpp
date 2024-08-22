#include <bits/stdc++.h>
using namespace std;
void count(vector<int> &arr)
{
    int inc = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] > 400)
        {
            inc++;
        }
    }

    cout << "total above " << inc << endl;
}

void endWithZero(vector<int> &arr)
{

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 10 == 0)
        {
            count++;
        }
    }
    cout << "total end with zero " << count << endl;
}

void ff(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 200)
        {
            cout << i;
            break;
        }
    }
}
void first()
{
    vector<int> arr = {4000};
    int sum = 0;
    for (auto it : arr)
    {
        sum += it;
    }
    if (sum > 5000)
    {
        count(arr);
    }
    else if (sum == 5000)
    {
        endWithZero(arr);
    }
    else
    {
        ff(arr);
    }
}

void separates(vector<int> &arr)
{

    vector<int> five = {};
    vector<int> non = {};

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 5 == 0)
        {
            five.push_back(arr[i]);
        }
        else
        {
            non.push_back(arr[i]);
        }
    }

    for (int i = 0; i < five.size(); i++)
    {
        /* code */
        cout << five[i] << " " << endl;
    }

    cout << "not 5" << endl;
    for (int i = 0; i < non.size(); i++)
    {
        cout << non[i] << " " << endl;
    }
}

void sl(vector<int> &arr)
{
    vector<int> gre = {};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 50)
        {
            gre.push_back(arr[i]);
        }
    }

    cout << gre[gre.size() - 1] << endl;
}

void sb(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 20)
        {
            cout << i;
            break;
        }
    }
}
void second()
{
    vector<int> arr = {500};
    int pro = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        pro *= arr[i];
    }
    if (pro > 1500)
    {
        separates(arr);
    }
    else if (pro == 1500)
    {
        sl(arr);
    }
    else
    {
        sb(arr);
    }
}

int countWeeksOver45(const vector<int> &hours)
{
    int count = 0;
    for (int hour : hours)
    {
        if (hour > 45)
        {
            count++;
        }
    }
    return count;
}

int findFirstWeekUnder30(const vector<int> &hours)
{
    for (int i = 0; i < hours.size(); i++)
    {
        if (hours[i] < 30)
        {
            return i;
        }
    }
    return -1; // If no week has hours below 30
}

int sumOfHours(const vector<int> &hours)
{
    return accumulate(hours.begin(), hours.end(), 0);
}

void third()
{

    vector<int> hours = {42, 50, 38, 45};
    double average = accumulate(hours.begin(), hours.end(), 0) / static_cast<double>(hours.size());

    if (average > 40)
    {
        int weeksOver45 = countWeeksOver45(hours);
        cout << "Number of weeks with hours exceeding 45: " << weeksOver45 << endl;
    }
    else if (average < 40)
    {
        int firstWeekUnder30 = findFirstWeekUnder30(hours);
        if (firstWeekUnder30 != -1)
        {
            cout << "First occurrence of a week with hours below 30 is week: " << firstWeekUnder30 + 1 << endl;
        }
        else
        {
            cout << "No week with hours below 30." << endl;
        }
    }
    else
    {
        int totalHours = sumOfHours(hours);
        cout << "Sum of hours: " << totalHours << endl;
    }
}

vector<int> FOUR(vector<int> &arr)
{
    vector<int> squar(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        squar[i] = arr[i] * arr[i];
    }
    return {squar};
}
int FourCheck(vector<int> &arr, int &a)
{
    int counts = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == a)
        {
            counts++;
        }
    }
    return counts;
}
int FourSlow(vector<int> &arr)
{
    int counts = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 500)
        {
            counts++;
        }
    }
    return counts;
}

void four()
{
    int sum = 0;
    vector<int> arr(10);
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the number" << "\n";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum  number is" << " " << sum << "\n";

    if (sum > 12000)
    {
        int a = FourSlow(arr);
        cout << "counts the number that are above 500:" << " " << a << "\n";
    }
    else if (sum < 12000)
    {
        int a;
        cout << "enter the number\n";
        cin >> a;
        int b = FourCheck(arr, a);
        cout << "the number of occurrences of a specific sale amount:" << " " << b << "\n";
    }

    else
    {
        vector<int> ans = FOUR(arr);
        cout << "each amount is squared:" << "\n";
        for (auto it : ans)
        {

            cout << it << " ";
        }
        cout << "\n";
    }
}

int asd(vector<int> &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] > 0)
        {
            sum += arr[i] % 10;
            arr[i] /= 10;
        }
    }
    return sum;
}
int check(vector<int> &arr)
{
    int index = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 10)
        {
            index = i;
            break;
        }
    }
    return index;
}
int slow(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 30)
        {
            count++;
        }
    }
    return count;
}

void five()
{
    int sum = 0;
    int avg;
    vector<int> arr(10);
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the number" << "\n";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
        avg = sum / 10;
    }
    cout << "average number is" << " " << avg << "\n";

    if (avg > 20)
    {
        int a = slow(arr);
        cout << "counts the number of items with discounts over 30%:" << " " << a << "\n";
    }
    else if (avg < 20)
    {
        int b = check(arr);
        cout << "first occurrence of an item with a discount below 10%:" << " " << b << "\n";
    }
    else
    {
        int c = asd(arr);
        cout << " sum of the digits of the discounts:" << " " << c << "\n";
    }
}

void fiveCount(vector<int> &arr)
{

    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 600)
        {
            count++;
        }
    }

    cout << count;
}

void totalCount(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        count += arr[i];
    }
}
void fFive(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] < 300)
        {
            cout << i;
            break;
            /* code */
        }
    }
}

void six()
{
    vector<int> arr = {1400};
    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    if (sum > 500)
    {
        fiveCount(arr);
    }
    else if (sum == 500)
    {
        totalCount(arr);
    }
    else
    {
        fFive(arr);
    }
}


 void moreThan(vector<int> &arr){
    int count = 0;
for (int i = 0; i < arr.size(); i++)
{
    if (arr[i] > 15, 000)
    {
       count++;
    }
    
}
cout<<count;

 }

void LessSix(vector<int> &arr){
    for (int i = 0; i <arr.size(); i++)
    {
        if (arr[i] < 8, 000)
        {
            cout<<i;
            break;
        }
        
    }
    
}

void seven()
{

    vector<int> arr = { 100,
                        000 } ;
                        int sum = 0;
    for (auto i : arr)
    {
        sum+=i;
    }
    if (sum > 100, 000)
    {moreThan(arr);
        
    }
    else
    {
LessSix(arr);
    }
}



void multi(vector<int>&arr){

    vector <int>t={};
    vector <int>nt={};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]% 25==0 )
        {
           t.push_back(arr[i]);
        }
        else{
            nt.push_back(arr[i]);
        }
        }
    
    for(auto i:t){
        cout<<i;
    }
    for(auto i:nt){
        cout<<i;
    }
}
void above(vector<int> &arr)
{

    vector <int>t={};
    vector <int>nt={};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>500 )
        {
           t.push_back(arr[i]);
        }
        
        }
    
    
    cout<<t[t.size()-1];
}
void Ef(vector<int> &arr)
{

 
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<100 )
        {
          cout<<i;
          break;
        }
        
        }
    
    
  
}

 void Eight(){

vector<int>arr={12,12,12,1,21,2,12,1,2};


int p=1;
for(auto i:arr){
    p*=i;
}

if (p > 2000)
{
    multi(arr);
}else if(p==2000){
above(arr);
}else{
    Ef(arr);
}

 }

 void exceeding(vector<int>&arr){

int count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>70)
        {
            count++;
            /* code */
        }
        
    }
    cout<<count;
    
 }

void vehicleB(vector<int>&arr){

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<50)
        {
            cout<<i;
            break;
        }
        
    }
    
}


     void
     NINE()
 {

     vector<int> arr = {1, 2, 3, 4, 5};
     int sum = 0;
     for (auto i : arr)
     {
         sum += i;
     }
     sum=sum/arr.size();
     if (sum > 60)
     {
         exceeding(arr);
     }else {
         vehicleB(arr);
     }
 }

 void inc(vector<int> &arr){

    count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>600)
        {
            /* code */
            count+=i;

        }
        
    }
    
    cout<<count;
 }

     void
     ten()
 {
     vector<int> arr = {21212};
     int sum = 0;
     for (auto i : arr)
     {
         sum += i;
     }
     if (sum > 500)
     {
         inc(arr);
     }
 }

int main()
{

    // first();
    // second();
    // third();
    // four();
    // five();
    // six();

    // seven();
    // Eight();
    // NINE();
    // ten();

    return 0;
}