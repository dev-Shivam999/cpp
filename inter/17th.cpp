#include <bits/stdc++.h>
using namespace std;

struct Re
{
    int Pos;
    string Vowel;
};

vector<Re> Find(string &str)
{
    int Pos = -1;
    string Vowel=" ";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            Vowel = str[i];
            Pos = i;
            break;
        }
    }

    vector<Re> Co;

    Co.push_back({Pos, Vowel});

    return Co;
}

int Count(vector<int> &Co)
{

    int maxStreak = 0;     
    int currentStreak = 0; 

    for (int num : Co)
    {
        if (num == 1)
        {
            currentStreak++;             
            maxStreak = max(maxStreak, currentStreak); 
        }
        else
        {
            currentStreak = 0; 
        }
    }

    return maxStreak;
}

int main()
{
    // string str = "computer";

    // vector<Re> result = Find(str);

    // for ( auto item : result)
    // {
    //     cout << "Vowel: " << item.Vowel << ", Position: " << item.Pos << endl;
    // }

vector<int>Bi={1,1,0,1,1,1,0,1,1};

cout<<Count(Bi);


    return 0;
}
