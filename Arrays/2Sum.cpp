#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int> &A, int B) { 
    vector<int>result;
    if(A.size()<2){
        return vector<int>();
    }

    map<int , int>hm;
    for(int i=0;i<A.size();i++){
        int k = B - A[i];
        if(hm.find(k) != hm.end()){
            result.push_back(hm[k]+1);
            result.push_back(i+1);

            return result;
        }
        if(hm.find(A[i]) == hm.end())
        {
            hm[A[i]] = i;
        }
    }

    return result;
}

int main(){

    vector<int>v;
    int l,item,sum;

    cin>>l;
    for(int i=0;i<l;i++){
        cin>>item;
        v.push_back(item);
    }
    cin>>sum;
    vector<int> ans = twoSum(v,sum);
    for(int i=0;i<ans.size();i++){
        cout<<"ans ==> " <<ans[i]<<endl ;
    }
    
}
