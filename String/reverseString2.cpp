// reverse string word by word

#include<bits/stdc++.h>
using namespace std;

string reverseString(string s);

int main(){

    string s = "       fwbpudnbrozzifml osdt ulc jsx kxorifrhubk ouhsuhf sswz qfho dqmy sn myq igjgip iwfcqq                 ";
    string newString;
    newString = reverseString(s);
    cout<<"newString====> "<<newString<<endl;
    return 0;
}

string reverseString( string s){
    string ans = "";
    string cur = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            if (cur.length() == 0) {
                continue;
            }
            // found a word 
            reverse(cur.begin(), cur.end());
            if (ans.length() > 0) { 
                ans.push_back(' ');
            }
            ans += cur;
            cur = "";
            continue;
        }
        cur.push_back(s[i]);
    }
    if (cur.length() > 0) {
        reverse(cur.begin(), cur.end());
        if (ans.length() > 0) { 
            ans.push_back(' ');
        }
        ans += cur;
    }
    s = ans;
    return s ;
}