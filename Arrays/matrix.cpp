#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,num;

    cin>>n;
    cin>>m;


    vector<vector<int>> vec( n , vector<int> (m)); 
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            vec[i][j] = j + i + 1;
        }
    }
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
     
    // vector<vector<int>>arr;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"Enter the number"<<endl;
    //         cin>>num;
    //         arr.push_back(num);
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    return 0;
}