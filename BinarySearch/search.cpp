#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Element found
        if (arr[mid] == key)
        {
            return mid;
        }

        // Left half is sorted
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= key && key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // Right half is sorted
        else
        {
            if (arr[mid] < key && key <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    // Element not found
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 0;

    int ans = search(arr, n, key);

    if (ans != -1)
    {
        cout << "Element found at index: " << ans << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}