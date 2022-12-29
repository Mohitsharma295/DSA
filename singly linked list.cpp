#include<iostream>
using namespace std;


void Display();
void Insertion();
void Deletion();
//create of node
struct Node{	
	int data,head;
	Node *next;									
};
struct Node*head=NULL;


int main(){

	int input,item;
	while(true){
	cout<<"Select option"<<endl;
	cout<<"1.Display"<<endl;
	cout<<"2.Insertion"<<endl;
	cout<<"3.Deletion"<<endl;
	cout<<"4.exit"<<endl;
	cout<<"choice:";
 
	cin>>input;
	if (input==1){
		Display();
	}else if (input==2){
		Insertion();
		
	}else if (input==3){
		Deletion();
	}else if (input==4){
		break;
	}else{
		cout<<"!Invalid Input"<<endl;
	}
	return 0;
}
}
void Display(){
	struct Node* ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<ptr->data <<"";
		ptr=ptr->next;
		
	}
	
}
void Insertion(){
}
void Deletion(){
	
}
 	

