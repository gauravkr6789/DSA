#include<iostream>
#include<vector>
using namespace std;
vector<string>res;
void helper(string &curr,int open ,int close ,int n){
    if((int)curr.size() == 2*n){
        res.push_back(curr);
        return;
    }
    if(open < n){
        curr.push_back('(');
        helper(curr,open+1,close,n);
        curr.pop_back();
    }
    if (close < open) {
        curr.push_back(')');
        helper(curr, open, close + 1, n);
        curr.pop_back();
    }
}
vector<string> generateParenthesis(int n) {
    //res.clear();
    string cur;
    helper(cur, 0, 0, n);
    return res;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    auto ans = generateParenthesis(n);
    for (auto &s : ans) cout << s << '\n';
    return 0;
}