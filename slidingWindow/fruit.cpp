#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int fruitIntoBasket(vector<int>&fruits){
    int n=fruits.size();
    int count=0;
    int left=0;
    int right=0;
    unordered_map<int,int>mp;
    while(right < n){
        mp[fruits[right]]++;
        if(mp.size() <= 2){
            count=max(count,right-left+1);
        }
        else{
            mp[fruits[left]]--;
            if(mp[fruits[left]] == 0 ){
                mp.erase(fruits[left]);
            }
            left++;
        }
        right++;
    }
    return count;
    
}

int main(){
    vector<int>fruit={0,1,2,2};
    int ans=fruitIntoBasket(fruit);
    cout<<"ans :"<<ans;
}