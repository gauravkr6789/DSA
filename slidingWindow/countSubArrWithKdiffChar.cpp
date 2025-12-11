#include<iostream>
#include<unordered_map>
using namespace std;
int CountSubArrK_DiffInteger(int arr[],int n,int CountOfDiffrentInt){
    
    unordered_map<int,int>IntCount;
    int subArrOfDiffINTCount=0;
    int DiffIntegerCount=0;
    int left=0;
    int right=0;
    while(right < n){
        IntCount[arr[right]]++;   // store the count of Integer 
        if(IntCount[arr[right]] == 1){      // check count should be one for diff int
            DiffIntegerCount++; // if count 1 means new integer then increse  
        }

        // diffCount == k

       
        // while diffcount == k calculate the ans 
        while (DiffIntegerCount > CountOfDiffrentInt) {
            IntCount[arr[left]]--;
            if (IntCount[arr[left]] == 0) {
                DiffIntegerCount--;
            }
            left++;
        }
        subArrOfDiffINTCount += (right - left + 1);
        right++; 
    }
    return subArrOfDiffINTCount;
}

int main(){
    int arr[]={1,2,1,2,3};;
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int Exactly_K_result=CountSubArrK_DiffInteger(arr,n,k)-CountSubArrK_DiffInteger(arr,n,k-1);
    cout<<"Count Of SubArray With "<<" "<<k<<" "<<"Diffrent Integer Is : "<<Exactly_K_result;
}