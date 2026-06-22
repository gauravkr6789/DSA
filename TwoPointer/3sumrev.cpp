#include <iostream>
using namespace std;
bool found(int arr[], int target,int n)
{
    int left = 1;
    int right = n - 1;
    int initialIndex = arr[0];

    while (left < right)
    {
        int currSum=arr[left]+arr[right];
        int targetSum=target-initialIndex;

        if (currSum == targetSum)
        {
            return true;
        }

        else if (currSum < targetSum)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return false;
}

int main(){
    int arr[]={1,4,43,6,10,8};
    int target=123;
    int n=sizeof(arr)/sizeof(arr[0]);

    bool ans=found(arr,target,n);
    if(ans){
       cout<<"found";
    }
    else{
       cout<<"not found";
    }
}