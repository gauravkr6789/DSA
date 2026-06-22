#include<iostream>
#include<unordered_map>
#include<utility>
using namespace std;

void uniqueCharIdx(string s){
    unordered_map<int, pair<char,int>>mp;
    for(int i=0;i<s.length();i++){
        mp[i,{s[i]++}]
    }

    for(auto & i:map){
        cout<<i.first<<" :"<<i.second<<endl;
    }
}

int main(){
    string s="leetcode";
    uniqueCharIdx(s);
}