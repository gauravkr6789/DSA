#include<iostream>
using namespace std;
int main(){
    int arr[]={10,2,3,15,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=21;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum=sum+arr[k];
                if(sum == target){
                    cout<<i<<j<<k;
                }
            }
            
        }
        
    }
    
}