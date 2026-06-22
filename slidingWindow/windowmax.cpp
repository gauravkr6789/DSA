#include<iostream>
#include<vector>
using namespace std;

int maxInWindow(int arr[],int startIndex,int endIndex){
    int maxval=-1;
    for(int i=startIndex;i<endIndex;i++){
        if(arr[i] > maxval){
            maxval=arr[i];
        }
    }
    return maxval;
}

vector<int>windowMax(int arr[],int k,int n){
    vector<int>ans;
    for(int i=0;i<=n-k;i++){
        int startIndx=i;
        for(int j=i;j<i+k;j++){
            if(j-i+1 == k){
                cout<<"statingindex:"<<startIndx<<" "<<"endingindex:"<<i+k<<endl;
                int maxele=maxInWindow(arr,startIndx,startIndx+k);
                cout<<endl<<"max:"<<maxele<<" "<<endl;
                ans.push_back(maxele);
            }
        }
    }
    return ans;
}

int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>res=windowMax(arr,3,n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}


/*#include<iostream>
#include<vector>
using namespace std;

int maxInWindow(int arr[],int startIndex,int endIndex){
    int maxval=-1;
    for(int i=startIndex;i<=endIndex;i++){
        if(arr[startIndex] > maxval){
            maxval=arr[startIndex];
        }
    }
    return maxval;
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int ans=maxInWindow(arr,0,3);
    cout<<ans;
}*/