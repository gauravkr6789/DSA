#include<iostream>
#include<stack>
using namespace std;
bool isvalidparatheses(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            if(st.empty()){
                return false;
            }
            if(ch == ')' && st.top() == '(' ||ch == '}' && st.top() == '{'|| ch == ']' && st.top() == '[' ){
                st.pop();
            }
        }
    }
    return st.empty();
}

int main(){
    string s="(";
    bool result=isvalidparatheses(s);
    cout<<"valid or not ? : "<<result;
}