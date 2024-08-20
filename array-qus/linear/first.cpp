#include<bits/stdc++.h>
using namespace std;
void count(vector<int> &arr)
{
    int inc=0;
    for (int i = 0; i < arr.size(); i++)
    {  

        if (arr[i] >400)
        {
            inc++;
        }
        
    }

    cout<<"total above "<<inc<<endl;
      
}

void endWithZero(vector<int> &arr){

int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
       if (arr[i] %10== 0)
       {
        count++;
       }
       
    }
    cout<<"total end with zero "<<count<<endl;
}

void ff(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<200)
        {
         cout<<i;
         break;   
        }
        
    }
    
}
    void
    first()
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
     else{
        ff(arr);
     }
}

void separates(vector<int>&arr){

    vector<int>five={};
    vector<int>non={};

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]%5==0)
        {
            five.push_back(arr[i]);
        }else{
            non.push_back(arr[i]);
        }
        
    }
    

    for (int i = 0; i < five.size(); i++)
    {
        /* code */
        cout<<five[i]<<" "<<endl;
    }

    cout<<"not 5"<<endl;
    for (int i = 0; i < non.size(); i++)
    {
        cout<<non[i]<<" "<<endl;
    }
    
    
}

   
void sl(vector<int>&arr){
    vector<int>gre={};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>50)
        {
            gre.push_back(arr[i]);
        }
        
    }

    cout<<gre[gre.size()-1]<<endl;
    
}


void sb(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]>20)
        {
           cout<<i;
           break;
        }
        
    }
    
}
    void
    second()
{
    vector<int> arr = {500};
    int pro = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        pro*=arr[i];
     }
     if (pro>1500)
     {
        separates(arr);
     }else if(pro==1500){
        sl(arr);
     }else{
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

void third(){

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



void four(){

}

int main(){

    // first();
    // second();
    // third();
    four();

        return 0;
}