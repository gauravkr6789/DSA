
#include <iostream>
#include <vector>
using namespace std;

void printNsubseq(int startingIdx, int n, int k, vector<int> &curr, vector<vector<int>> &ans)
{
    if (curr.size() == k)
    {
        ans.push_back(curr);
        return;
    }

    for (int idx = startingIdx; idx <= n; idx++)
    {
        curr.push_back(idx);
        printNsubseq(idx + 1, n, k, curr, ans);
        curr.pop_back();
    }
}

int main()
{
    int n;
    cout << "enter the n : ";
    cin >> n;
    int k;
    cout << endl
         << "enter the k ";
    cin >> k;
    vector<int> curr;
    vector<vector<int>> ans;
    printNsubseq(1, n, k, curr, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
