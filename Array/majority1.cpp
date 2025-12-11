#include<iostream>
using namespace std;
int majority(int arr[],int n){
    int votes=0;
    int candidate=-1;
    for(int i=0;i<n;i++){
        if(votes == 0){
            candidate=arr[i];
            votes=1;
        }
        else if(arr[i] == candidate){
            votes++;
        }
        else{
            votes--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == count){
            count++;
        }
    }
    if(count > n/2){
        return candidate;
    }
    return -1;
}