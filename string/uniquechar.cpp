#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int uniquCharIndex(string s){
    int uniqueIndex=0;
    unordered_map<char,int>freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }

    for(auto &i : freq){
        cout<<i.first<<"--> "<<i.second<<endl;
    }

    for(int i=0;i<s.length();i++){
        if(freq[s[i]] == 1){
            uniqueIndex=i;
            break;
        }
    }
    return uniqueIndex;
}

int main(){
    string s="aabb";
    int ans=uniquCharIndex(s);
    cout<<endl<<"index:"<<ans;
}
