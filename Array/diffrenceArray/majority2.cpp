#include<iostream>
#include<vector>
using namespace std;
vector<int>majority(vector<int>& nums){
    int size=nums.size();
    int count =1;
    vector<int>majority;
    for(int i=0;i<size-1;i++){
        if(nums[i] == nums[i] && nums[i] == nums[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count > size/3){
            majority.push_back(nums[i]);
        }
    }
    return majority;
}
int main(){
    vector<int>nums={3,6,3};
    vector<int>result=majority(nums);
    for(int i : result){
        cout<<result[i];
    }
}