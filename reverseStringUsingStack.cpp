#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

void reverseString(string str)
{
    Stack <char> st;
    Queue <char> que;
    int idx = 0;
    while(str[idx] != '\0'){
        char ch = str[idx];
        st.push(ch);
        idx++;
    }
    while(!st.empty()){
        que.enqueue(st.pop());
    }
    while(!que.empty()){
        cout<<que.dequeue();
    }
}

int main()
{
    string str;
    cin>>str;

    reverseString(str);


    return 0;
}

