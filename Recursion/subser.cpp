#include <iostream>
#include <vector>
using namespace std;

void subset(string str, int index, int n, string &curr, vector<string> &result) {

  
    if (index == n) {
        result.push_back(curr);
        return;
    }

    curr.push_back(str[index]);
    subset(str, index + 1, n, curr, result);

    curr.pop_back();
    subset(str, index + 1, n, curr, result);
}

int main() {
    string str = "abc";
    int n = str.length();

    string curr = "";
    vector<string> result;

    subset(str, 0, n, curr, result);

    for (auto &s : result) {
        cout << "\"" << s << "\"" << endl;
    }

    return 0;
}
