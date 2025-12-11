#include<iostream>
using namespace std;
float percentage(int a,int b){
    int result=(a*b)/100;
    return result;
}
int main(){
    int a=300;
    int b=10;
    cout<<percentage(a,b);

}