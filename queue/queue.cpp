#include<iostream>
using namespace std;
class queue{
    int *arr;
    int size;
    int front;
    int rear;

    public:
    queue(int x){
        size=x;
        arr=new int[size];
        front=0;
        rear=0;
    }

    bool isFull(){
        if(rear == size){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int x){
        if(isFull()){
            cout<<"queue is overflow ";
        }
        else{
            arr[rear]=x;
            rear++;
            
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack overflow";
        }

        else{
            arr[front]=-1;
            front++;
            if(front == rear){
                front=0;
                rear=0;
            }
        };
    }
    void display(){
        if(front == rear){
            cout<<"queue is empty ";
        }
        for(int i=front;i<rear;i++){
            cout<<arr[i];
        }

        
    }

};

int main(){
    queue q(5);
    q.push(10);
    q.pop();
    q.display();
}

       