#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[]={1,1,3,2,2,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int , int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp.count(arr[i] == 1)){
            cout<<"single element is : " <<i<<endl;
        }
    }

}
