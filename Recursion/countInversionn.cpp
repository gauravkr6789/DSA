#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int i = low;
    int j = mid + 1;
    int count = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            
            count += (mid - i + 1);
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= high)
        temp.push_back(arr[j++]);

    for (int k = low; k <= high; k++)
        arr[k] = temp[k - low];

    return count;
}

int mergesort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return 0;  // no inversion

    int mid = start + (end - start) / 2;

    int leftCount = mergesort(arr, start, mid);
    int rightCount = mergesort(arr, mid + 1, end);
    int mergeCount = merge(arr, start, mid, end);

    return leftCount + rightCount + mergeCount;
}

int main()
{
    vector<int> arr = {1, 2, 8, 5, 3, 6};
    int n = arr.size();

    int ans = mergesort(arr, 0, n - 1);

    cout << "Inversion count is: " << ans << endl;
}
