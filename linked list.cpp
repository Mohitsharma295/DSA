#include<iostream>
using namespace std;

struct node{
 
	
	int data;
	node* next;
	
};
void printlist(node*n){
	while(n !=NULL){
		cout<< n->data<<"";
		n=n->next;
	}	 
}
int main(){
	node*first=NULL;
	node*second=NULL;
	node*third=NULL;
	
	first=new node();
	second=new node();
	third=new node();
	
	first->data=1;
	first->next=second;
	
	second->data=2000;
	second->next=third;
	
	third ->data=3;
	third->next=NULL;
	
	printlist(first);
	return 0;
	
	
}
