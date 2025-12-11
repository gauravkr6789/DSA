// infix to postfix

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char &s)
{

    if (s == '^')
    {
        return 3;
    }
    else if (s == '*' || s == '/')
    {
        return 2;
    }
    else if (s == '+' || s == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isOperator(char & ch){
    if(ch =='^' || ch == '/' || ch == '*' || ch == '+' || ch == '-'){
        return true;
    }
    else{
        return false;
    }
}

string infixtoPostfix(string s){
    int n=s.length();
    stack<char>st;
    string ans=" ";
    for(int i=0;i<n;i++){
        if(isOperator(s[i])){
            st.push(s[i]);
        }
        else if(!isOperator(s[i])){
           ans+=s[i];
        }

        else if(s[i] == '('){
            st.push(s[i]);
        }
    }
}