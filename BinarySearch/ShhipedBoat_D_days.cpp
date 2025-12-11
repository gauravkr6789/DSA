#include <iostream>
using namespace std;
bool Is_Possible(int arr[], int n, int capacity, int days)
{
    int weight = 0;
    int count = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > capacity)
            return false;

        if (weight + arr[i] > capacity)
        {
            count++;
            weight = arr[i];
        }
        else
        {
            weight += arr[i];
        }
    }

    return count <= days;
}


