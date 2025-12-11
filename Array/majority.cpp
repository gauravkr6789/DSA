// brute approach

/*#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }

            if (count > size / 2)
            {
                cout << arr[i] << " is the majority element";
                return 0;
            }
        }
    }
}*/

/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int majority=arr[0];
    int count=1;
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>n/2){
           majority=arr[i];
           break;
        }
    }
    cout<<"Majority element is : "<<majority;
    return 0;
    

}*/


