/*#include <iostream>
using namespace std;

bool is_Odd(int num)
{
    return num % 2 != 0;
}

int count_Of_NiceSubArray(int arr[], int n, int k)
{
    int NiceSubCount = 0;
    for (int i = 0; i < n; i++)
    {
        int OddCount = 0; 
        for (int j = i; j < n; j++)
        {
            if (is_Odd(arr[j]))
                OddCount++;
            
            if (OddCount == k)
                NiceSubCount++;
            else if (OddCount > k)
                break; 
        }
    }
    return NiceSubCount;
}

int main()
{
    int arr[] = {1, 1, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int ans = count_Of_NiceSubArray(arr, size, k);
    cout << "Number Of Nice SubArray Is : " << ans;
}*/



#include <iostream>
using namespace std;

bool is_Odd(int num) {
    return num % 2 != 0;
}


int atMost(int arr[], int n, int k) {
    int left = 0, result = 0, odd_count = 0;

    for (int right = 0; right < n; right++) {
        if (is_Odd(arr[right]))
            odd_count++;

        while (odd_count > k) {
            if (is_Odd(arr[left]))
                odd_count--;
            left++;
        }

        result += (right - left + 1); // number of subarrays ending at 'right'
    }

    return result;
}

int count_Of_NiceSubArray(int arr[], int n, int k) {
    return atMost(arr, n, k) - atMost(arr, n, k - 1);
}

int main() {
    int arr[] = {1, 1, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int ans = count_Of_NiceSubArray(arr, size, k);
    cout << "Number Of Nice SubArray Is : " << ans;
}

