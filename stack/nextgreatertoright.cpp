#include<iostream>
#include<vector>
using namespace std;
vector<int>NextGreaterToRight(vector<int>&arr,int n,vector<int>&indices){
    vector<int>ans(n,-1);
    int count=0;
    int m=indices.size();
    for(int i=0;i<m;i++){
        for(int j=indices[i];j<n;i++){
            for(int k=j+1;j<n;j++){
                if(arr[k] > arr[j]){
                    count++;
                }
            }
        }
    }
    
}