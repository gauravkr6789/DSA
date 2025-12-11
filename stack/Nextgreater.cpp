#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>NextgreaterElement(vector<int>arr,int n){
    vector<vector<int>>ans;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] < arr[j]){
                ans.push_back({arr[j]});
            }
            else{
                ans.push_back({-1});
            }
        }
    }
    return ans;
}

int main(){
    vector<int>v({3,10,2,5,6,7,8});
    int n=v.size();
    vector<vector<int>> result=NextgreaterElement(v,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    
}
