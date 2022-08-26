#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

bool deleteDuplicateParenthesis(string str)
{
    Stack <char> st;
    bool found = false;
    int idx = 0;
    while(str[idx] != '\0')
    {

        if(str[idx] == '(' || str[idx] == '{' || str[idx] == '[')
        {
            st.push(str[idx]);
        }
        else if(str[idx]>='a' && str[idx]<='z')
        {

        }
        else if(str[idx] == '+' || str[idx] == '-' || str[idx] == '*' || str[idx] == '/' || str[idx] == '^')
        {

        }
        else if(str[idx] == ')')
        {
            if(st.Top() == ')') found = true;
            else st.push(str[idx]);
        }
        else if(str[idx] == '}')
        {
            if(st.Top() == '}') found = true;
            else st.push(str[idx]);
        }
        else if(str[idx] == ']')
        {
            if(st.Top() == ']') found = true;
            else st.push(str[idx]);
        }


        idx++;
    }
    return found;

}
int main()
{
    string str;
    cin>>str;

    bool chk = deleteDuplicateParenthesis(str);
    if(chk == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

