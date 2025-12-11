#include<iostream>
using namespace std;
void permute(string current, string remaining) {
    if (remaining.empty()) {
        cout << current << endl;
        return;
    }

    for (int i = 0; i < remaining.size(); ++i) {
        char ch = remaining[i];
        cout<<"character :"<<ch<<endl;
        string new_current = current + ch;
        cout<<"newcurr:"<<new_current<<endl;
        string new_remaining = remaining.substr(0, i) + remaining.substr(i + 1);
        cout<<"remainingcurr:"<<new_remaining<<endl;
        permute(new_current, new_remaining);
}
}
int main(){
    string str="abc";
    permute("",str);
}