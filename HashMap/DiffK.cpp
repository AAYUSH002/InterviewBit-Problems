#include<bits/stdc++.h>
#include<vector>
using namespace std;


int diffPossible(const vector<int> &A, int B) {
    unordered_set<int>hm;
    int diff;
    for(int i=0;i<A.size();i++){
        diff = A[i] - B;
        cout<<"diff===>"<<diff<<endl;
        if(hm.find(diff) != hm.end()){
            return 1;
        }
        else{
            hm.insert(A[i]);
        }
        
    }
    return 0;
}

int main(){
    vector<int>A;
    int target;
    int lengthA;
    int input1;
    int ans;

    cin>>lengthA;

    for(auto i = 0; i != lengthA ; i++){
        cin>>input1;
        A.push_back(input1);
    }
  
    cin>>target;

    ans = diffPossible(A,target);
    cout<<ans<<endl;

    return 0;
}

