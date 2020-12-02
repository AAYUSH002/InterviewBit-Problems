#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char>st;

    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');

    int l = s.size();
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if(st.find(s[i]) != st.end()){
           count = count +  (l -i); 
        }
    }
    cout<<count<<endl;
    return 0;
}