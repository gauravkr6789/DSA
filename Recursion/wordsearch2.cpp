#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string>v;
    v.push_back("hello");
    v.push_back("world");
    v.push_back("print");

    for(int i=0;i<v.size();i++){
        cout<<"indexe:"<<i<<" "<<v[i]<<" "<<endl;
    }
}