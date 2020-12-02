#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>&A , int B){
        map<int,int>res_hash;
        vector <int> result;
        int i;
        for(i=0;i<A.size();i++)
        {
            if(res_hash.find(B-A[i])!=res_hash.end())
            {
                
                result.push_back(res_hash[B-A[i]]);
                result.push_back(i);
                return result;
            }
            else
                res_hash[A[i]] = i;
        }

        return result;

}

int main(){
    vector<int>A;
    int target;
    vector<int>ans;
    int lengthA;
    int input1;

    cin>>lengthA;

    for(auto i = 0; i != lengthA ; i++){
        cin>>input1;
        A.push_back(input1);
    }
  
    cin>>target;

    ans = twoSum(A,target);

    for(int j=0;j<ans.size();j++){
        cout<<ans[j];
    }
    
    return 0;
}

// Input

// A : [ 4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7, 7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8 ]
// B : -3