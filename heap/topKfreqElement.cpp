#include<iostream>
#include <unordered_map>
#include<utility>
#include<queue>
using namespace std;
vector<int> top_kFreq_Ele(int arr[],int n,int k){
    unordered_map<int ,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    for(auto i : freq){
        pq.push(make_pair(i.second,i.first));
        if(pq.size() > k){
            pq.pop();
        }
    }

    vector<int>ans;

    while(!pq.empty()){
        pair<int,int>temp=pq.top();
        pq.pop();
        ans.push_back(temp.second);
    }
    return ans;
}
int main(){
    int arr[]={1,1,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>res=top_kFreq_Ele(arr,n,2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}
