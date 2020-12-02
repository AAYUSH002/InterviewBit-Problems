// rotate string k times clockwise

#include<bits/stdc++.h>
using namespace std;

bool pallindromeString(string s);

int main(){

    string s;
    cin>>s;
    bool newString;
    newString = pallindromeString(s);    
    cout<<"newString====> "<<newString<<endl;
    return 0;
}

bool pallindromeString ( string s){
    int l = s.length();
    if(l == 1){
        return true;
    }
    int start = 0;
    int end = l-1;
    
    if(s[start] != s[end]){
        cout<<"return";
        return false;
    }
    else{
        s = s.substr(1, s.length() - 2);
        pallindromeString(s);
    }
    return true;
   

}