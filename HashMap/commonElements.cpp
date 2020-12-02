#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> commonElements(vector<int>&A , vector<int>&B){
    unordered_map<int,int>map1;
    vector<int>arr;

    for(int i=0;i<A.size();i++){
        if(map1.find(A[i]) != map1.end()){
            map1[A[i]]++;
        }
        else{
            map1.insert(make_pair(A[i],1));
        }
    }
    
    // vector<int>::iterator it;
    // for(auto x : map1){
    //     cout<<x.first << "" << x.second <<endl;
    // }
   
   for(int j=0;j<B.size();j++){
       if(map1.find(B[j]) != map1.end()){
           if(map1[B[j]]>1){
            arr.push_back(B[j]);
           }
           map1[B[j]]--;
       }
   }

    return arr;
}

int main(){
    vector<int>A;
    vector<int>B;
    vector<int>ans;

    int lengthA;
    int lengthB; 
    int input1;
    int input2;

    cin>>lengthA;
    cin>>lengthB;

    for(auto i = 0; i != lengthA ; i++){
        cin>>input1;
        A.push_back(input1);
    }
    for(auto j = 0; j != lengthB ; j++){
        cin>>input2;
        B.push_back(input2);
    }

    ans = commonElements(A,B);
    
    return 0;
}