/* 
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
*/

// approach 1 : brute force o(n*n*n)

/*#include<iostream>
#include<climits>
using namespace std;
int minLengthSubarrSum(int arr[],int target,int n){
    int sum;
    int minSize=INT_MAX;
    for(int i=0;i<0;i++){
        sum=0;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum >= target){
                minSize=min(minSize,j-i+1);
                break;
            }
        }
    }
}*/

// Approach 2: using sliding window o(n)

#include<iostream>
#include<climits>
using namespace std;
int minLengthSubarrSum(int arr[],int target,int n){
    int minsize=INT_MAX;
    int sum=0;
    int left=0;
    int right=0;
    while(right < n){
        sum=sum+arr[right];
        while(sum >= target){
            minsize=min(minsize,right-left+1);
            sum=sum-arr[left];
            left++;
        }
        right++;
    }
    if(minsize == INT_MAX) return 0;
    else return minsize;
}
int main(){
    int arr[]={2,3,1,2,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    int minimumSize=minLengthSubarrSum(arr,target,size);
    cout<<"minimum sum of subarray which is greater equal to target:"<<minimumSize;
}
