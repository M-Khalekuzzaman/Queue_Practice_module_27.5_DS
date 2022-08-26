#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

int prefixExpression(string str)
{
    Stack <int> st;
    for(int i = str.length()-1; i>=0; i--)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            st.push(str[i]-'0');
        }
        else
        {
            int a = st.pop();
            int b = st.pop();
            switch(str[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }

    }

    return st.Top();
}
int main()
{
    string str;
    cin>>str;

    int chk = prefixExpression(str);
    cout<<chk<<endl;




    return 0;
}

