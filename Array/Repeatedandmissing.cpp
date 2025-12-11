// algo:

// 1 -- find repeated  2 missing  3 push both in vector


#include<iostream>
using namespace std;
void missing(int arr[],int n){
    int sumOfnatural=n*(n/2+1);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }

    int missing=sumOfnatural-totalSum;

    cout<<"missing :"<<missing;

}

int main(){
    int arr[]={1,2,3,5}
}