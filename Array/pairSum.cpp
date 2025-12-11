/*#include<iostream>
#include<array>
#include<vector>
using namespace std;
vector <int> pairSum(int arr[],int n,int key){
    vector<int>ans;
    int start;
    int end=n-1;
    for(start=0;start<end;){
        if(arr[start]+arr[end] == key){
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
            return ans;
        }
        else if(arr[start]+arr[end] > key){
            end--;
        }
        else{
            start++;
        }

        

    }
}
int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    vector<int> result = pairSum(arr, n, key);
    if(result.empty()){
        cout<<"No pair found with given sum";
    }
    else{
        cout<<"Pair found: "<<result[0]<<" and "<<result[1];
    }
    return 0;
}
*/




























































