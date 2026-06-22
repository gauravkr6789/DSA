#include<iostream>
#include<vector>
using namespace std;

int countArithmeticSlice(vector<int>arr){
    int count=0;
    int sliceCount=0;

    for(int i=2;i<arr.size();i++){
        if(arr[i]-arr[i-1] == arr[i-1]-arr[i-2]){
            sliceCount+=1;
            count+=sliceCount;
        }
        else{
            sliceCount=0;
        }
    }
    return count;
}

int main(){
    vector<int>arr={1,2,3,4};
    int ans=countArithmeticSlice(arr);
    cout<<"number of Slices is : "<<ans;
}
