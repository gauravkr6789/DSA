#include <iostream>
#include <vector>
using namespace std;

void Rearrange_Sign(int arr[], int n)
{
    vector<int> pos, neg, ans;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0, j = 0;
    bool ispos = true;

    while (i < pos.size() && j < neg.size())
    {
        if (ispos)
        {
            ans.push_back(pos[i++]);
        }
        else
        {
            ans.push_back(neg[j++]);
        }
        ispos = !ispos;

        while (i < pos.size())
            ans.push_back(pos[i++]);

        while (j < neg.size())
            ans.push_back(neg[j++]);

        for (auto &x : ans)
            cout << x << " ";
    }
}
int main()
{
    int arr[] = {2, 3, 4, -1, -2, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    Rearrange_Sign(arr, size);
}
