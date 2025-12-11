// square pattern

/*#include <iostream>
using namespace std;
void SquarePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* " << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    SquarePattern(n);
}*/

// left angle triangle

/*#include<iostream>
using namespace std;
void Triangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    Triangle(n);
    return 0;
}*/

// right angle triangle
/*#include<iostream>
using namespace std;
void Triangle(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    Triangle(n);
    return 0;
}*/

// pattern with space

/*#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    Pattern(n);
    return 0;
}*/

// diamond pattern

/*#include<iostream>
using namespace std;
void dimond_pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=5;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    dimond_pattern(n);
    return 0;
}*/

/*#include <iostream>
using namespace std;
bool isPalindrome(string s)
{
    int end = s.length() - 1;

    for (int index = 0; index < s.length(); index++)
    {

        cout << index << " " << end << " " << s[index] << " ==== " << s[end] << "\n";

        if (s[index] == ' ' || !isalnum(s[index]))
        {
            continue;
        }

        if (s[end] == ' ' || !isalnum(s[end]))
        {
            end = end - 1;
            index = index - 1;
            continue;
        }
        cout << tolower(s[index]) << " == " << tolower(s[end]) << "\n";
        cout << s[index] << " ==== " << s[end] << "\n";
        cout << index << " ======= " << end << "\n";
        if (tolower(s[index]) != tolower(s[end]))
        {

            return false;
        }
        end = end - 1;
    }
    return true;
}

int main()
{

    string s = ",,,,,,,,,,,,acva";

    cout << "Input :: " << s << " Result " << isPalindrome(s);
}*/
#include<iostream>
using namespace std;
void Reverse(int n){
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<"Reverse number is : "<<rev<<endl;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    Reverse(num);
    
    return 0;
}