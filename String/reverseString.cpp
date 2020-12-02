#include<bits/stdc++.h>
using namespace std;

string reverseString(string s);

int main(){

    string s = "aayush";
    string newString;
    newString = reverseString(s);
    cout<<"newString====> "<<newString<<endl;
    return 0;
}

string reverseString( string s){
    char st;
    int l = s.size();
    for(int i=0;i<l/2;i++){
        st = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = st;
    }

    return s;

}