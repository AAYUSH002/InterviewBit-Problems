#include<bits/stdc++.h>
using namespace std;

void printFrequencies(string s){
    unordered_map<string,int>map;
    stringstream ss(s);
    cout<<"s ====>" << s << endl;
    string word;
    while(ss >> word){
        map[word]++;
    }
    unordered_map<string, int>:: iterator itr;
    for(itr = map.begin(); itr != map.end();itr++){
        cout << "(" << itr->first << ", " << itr->second << ")\n"; 
    }
    return;
}

int main(){
    string s;
    cout<<"Enter the string ";
    cin>>s;
    printFrequencies(s);
}