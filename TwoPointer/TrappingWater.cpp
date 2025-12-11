#include <iostream>
#include <vector>
using namespace std;
int TrappingWater(int arr[],int n){
    int left=0;
    int right=n-1;
    int left_max=0;
    int right_max=0;
    int water_Trap=0;
    while(left < right){
        if(arr[left] < arr[right]){
            if(arr[left] >= left_max){
                left_max=arr[left];
            }
            else{
                water_Trap+=left_max-arr[left];
            }
            left++;
        }
        else{
            if(arr[right] >= right_max){
                right_max=arr[right];
            }
            else{
                 water_Trap+=right_max-arr[right];
            }
            right--;
        }

    }
    return water_Trap;
    
}
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=TrappingWater(arr,size);
    cout<<"trap water : "<<result;
}

