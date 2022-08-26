#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

bool checkPalindrome(string str)
{
    Stack <char> st;
    string original = str;
    string word;
    int idx = 0;
    while(str[idx] != '\0'){
        char ch = str[idx];
        st.push(ch);
        idx++;
    }
    while(!st.empty()){
       word += st.pop();
    }
    if(original == word) return true;
    else return false;
}

int main()
{
    string str;
    cin>>str;
    bool chk = checkPalindrome(str);
    if(chk) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




    return 0;
}
