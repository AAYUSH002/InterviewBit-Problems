// rotate string k times clockwise

#include<bits/stdc++.h>
using namespace std;

string rotateString(string s,int b);

int main(){

    int b;
    string s;
    cin>>b;
    cin>>s;
    string newString;
    newString = rotateString(s,b);    
    cout<<"newString====> "<<newString<<endl;
    return 0;
}

string rotateString ( string s,int b){
    int l = s.length();
    int numberOfRotations = b % l;
    int temp;
    for(int i=0;i<numberOfRotations;i++){
        temp = s[i];
        s[i]=s[l-b+i];
    }
    return s;

}