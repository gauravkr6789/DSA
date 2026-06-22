#include <iostream>
#include <queue>
using namespace std;

int kthLargest(int *arr,int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        if(pq.size() < k)
        {
            pq.push(arr[i]);
        }
        else if(arr[i] >  pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}

int main()
{
    int arr[] = {10, 2, 3, 7, 6}; // 2 3 6 7 10
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans = kthLargest(arr, n,2);
    cout << "ans : " << ans;
}
