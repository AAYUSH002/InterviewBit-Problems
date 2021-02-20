#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(const vector<int>&arr){
    int maxCount = 0;
    unordered_map<int,int>hm;
    for(auto item : arr){
        if(hm.find(item)==hm.end()){
            int lCount=0;
            int rCount=0;
            if(hm.find(item-1)!=hm.end()){
                lCount = hm[item-1];
            }
            if(hm.find(item+1)!=hm.end()){
                rCount = hm[item+1];
            }
            hm[item] = lCount + 1 + rCount;
            hm[item-lCount] = hm[item];
            hm[item+rCount] = hm[item];

            if(maxCount < (lCount + 1 + rCount))maxCount = lCount + 1 + rCount;
        }
    }
    return maxCount;
}

int main(){
    vector<int>array = {100,1,3,2,102,103,4};
    int count;
    count = longestConsecutiveSequence(array);

    cout<<count<<endl;

    return 0;
}