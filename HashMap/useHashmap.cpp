#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>hm;
    
    hm.insert(make_pair("Aayush",10));
    hm.insert(make_pair("Gupta",20));
    hm.insert(make_pair("Hustler",30));

    for(auto x : hm){
        cout<<x.first << " " <<x.second<<endl;  
    }

    string key = "Aay";

    if(hm.find(key) == hm.end()){
        cout<<key<< " Key Not Found"<<endl;
    }
    else{
        cout<< "Found "<<key<<endl;
    }
}