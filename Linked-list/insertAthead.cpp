#include<iostream>

class Node{ 
	public:
		int data;
		Node*next=NULL;
		Node(int data){
			this->data=data;
			next=NULL;
		}

        // head->next=node;
           head->next->next =node;
};

