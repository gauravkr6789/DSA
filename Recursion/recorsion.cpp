// print n times

/*#include<iostream>
using namespace std;
void printNtimes(int n){
    //base case
    if(n<=0){
        return;
    }
    //recursive case
    cout<<"Number -- "<<n<<endl;
    printNtimes(n-1);

}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    printNtimes(n);
}*/

/*#include<iostream>
using namespace std;
void printNtimes(int n,int curr=1){
    //base case
    if(curr>n){
        return;
    }
    //recursive case
    cout<<"Number -- "<<curr<<endl;
    printNtimes(n,curr+1);

}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    printNtimes(n);
}*/

/*#include<iostream>
#include<string>
using namespace std;

void printNtimes(int n,string name){
    //base case
    if(n<=0){
        return;
    }
    //recursive case

    printNtimes(n-1,name);
    cout<<name;
}

int main(){

    int n;
    cin>>n;
    string name;
    cout<<"Enter your name :";
    cin>>name;
    printNtimes(n,name);

}*/

// reverse

/*#include<iostream>
using namespace std;
void revese(int n){
    // base case
    if(n<=0){
        return;
    }

    int rev=n%10;
    cout<<rev;
    revese(n/10);

}
int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Reverse number is : ";
    revese(num);
    return 0;
}*/

// sum of first n number
/*#include<iostream>
using namespace std;
void sumOfn(int n,int curr=1,int sum=0){

    if(curr>n){
        cout<<"Sum of first "<<n<<" number is : "<<sum<<endl;
        return;
    }
    sum+=curr;

    sumOfn(n,curr+1,sum);

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    sumOfn(n);
    return 0;
}*/

// factorial

/*#include<iostream>
using namespace std;
long long int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    long long int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
    return 0;
}*/

// fibonacci

/*#include<iostream>
using namespace std;
int fib(int n){
    if(n==0||n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Fibonacci of "<<n<<" is : "<<fib(n)<<endl;
    return 0;
}*/


// reverse array

/*#include<iostream>
using namespace std;

void reverse(int arr[],int start, int end){
    // base case
    if(start>=end){
        return;
    }
    // recursive case
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr,0,n-1);
    cout<<"\nReversed array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
bool isPallindrome(string S,int s,int e){
    if(s>=e){
        return true ;
    }
    if(S[s]==S[e]){
        
      return isPallindrome(S,s+1,e-1);
    }
    else{
        return false;
    }
    
}
int main(){
    string S;
    cout<<"Enter a string : ";
    cin>>S;
    int s=0;
    int e=S.length()-1;
   
    if(isPallindrome(S,s,e)){
        cout<<"String is a palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
    return 0;
}
*/


#include<iostream>
using namespace std;
int Sumofn(int n){
	
    if(n==0){
    	return 0;
	}
	else{
		return (n*n*n)+Sumofn(n-1);
	}

	
}
int main(){
	int num;
	cout<<"Enter number : "<<" "<<endl;
	cin>>num;
	cout<<"Sum is : "<<Sumofn(num);
}










