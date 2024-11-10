#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> lol = { {{0,"Red"},{1,"Blue"},{2,"Green"}}};
    for(auto i:lol){
       cout << i.first << " " << i.second << endl;
    }

    map<string, string> gen = {{{"Female", "Cancel"}, {"Female", "Hypothetic"}, {"Male", "Cancel"},{"Female","Cancel"}}};
    for (auto i : gen)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}