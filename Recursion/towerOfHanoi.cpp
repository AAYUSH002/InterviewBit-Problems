#include<bits/stdc++.h>
using namespace std;

int fibo(int num){
    if(num == 0 || num ==1){
        return num;
    }
    return fibo(num-1) + fibo(num-2);
}

int main(){

    int n;
    cin>>n;

    int ans = fibo(n);
    cout<<ans;
    return 0;
}