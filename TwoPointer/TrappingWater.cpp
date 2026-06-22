/*#include <iostream>
#include <vector>
using namespace std;
int trappingRainWater(int arr[],int n){
    int result=0;

    for(int i=1;i<n;i++){
        int leftmax=arr[i];
        for(int j=0;j<i;j++){
            leftmax=max(leftmax,arr[j]);
        }
        int rightmax=arr[i];
        for(int j=i+1;j<n;j++){
            rightmax=max(rightmax,arr[j]);
        }

        result+=(min(leftmax,rightmax)-arr[i]);
    }
    return result;

}

int main(){
    int arr[]={2, 1, 5, 3, 1, 0, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=trappingRainWater(arr,n);
    cout<<"trapping water is : "<<ans;
}*/

// prefix sum approach

/*#include <iostream>
#include <vector>
using namespace std;
int traippingWater(int arr[], int n)
{
    vector<int> leftmax(n, 0);
    vector<int> rightmax(n, 0);
    leftmax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i]);
    }

    rightmax[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i]);
    }

    int result=0;
    for(int i=1;i<n;i++){
        result+=min(leftmax[i],rightmax[i])-arr[i];
    }
    return result;
}

int main()
{
    int arr[] = {2, 1, 5, 3, 1, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=traippingWater(arr,n);
    cout<<"trapping water : "<<ans;
}*/

#include <iostream>
using namespace std;
int traippingWater(int arr[], int n)
{
    int leftmax = 0;
    int rightmax = 0;
    int left = 0;
    int right = n - 1;
    int result = 0;

    while (left < right)
    {
        leftmax = max(leftmax, arr[left]);
        rightmax = max(rightmax, arr[right]);

        if (leftmax < rightmax)
        {
            result += leftmax - arr[left];
            left++;
        }
        else
        {
            result += rightmax - arr[right];
            right--;
        }
    }
    return result;
}
int main()
{
    int arr[] = {2, 1, 5, 3, 1, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = traippingWater(arr, n);
    cout << "trapping water : " << ans;
}
