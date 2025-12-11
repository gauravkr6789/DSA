#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=1;
    int *freq=new int[n];
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            freq[arr[i]]++;
        }
            else{
                maxcount = max(maxcount,count);
                count=0;
            }

        }
        for(int i=0;i<n;i++){
            cout<<freq[i]<<" ";
        }
        cout<<"Max length of consecutive 1s: "<<maxcount<<endl;
    return 0;
    }
    
 