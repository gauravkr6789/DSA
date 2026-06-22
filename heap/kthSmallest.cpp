#include <iostream>
#include <queue>
using namespace std;

int kthSmallest(int *arr,int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if(pq.size() < k)
        {
            pq.push(arr[i]);
        }
        else if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main()
{
    int arr[] = {10, 2, 3, 7, 6}; // 2 3 6 7 10
    int n=sizeof(arr)/sizeof(arr[0]);
    kthSmallest(arr, n,3);
   
}
