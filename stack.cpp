#include<iostream>				
using namespace std;
int stack[100];
int top =-1;

void push (int item);
void pop	();
void view();

int main(){
	while(true){
	
	int input,item;
	cout<<"Select option"<<endl;
	cout<<"1.view"<<endl;
	cout<<"2.push"<<endl;
	cout<<"3.pop"<<endl;
	cout<<"4.exit"<<endl;
	cout<<"choice:";
	cin >> input;
	
	if(input==1){
		view();
	}else if(input==2){
		cin>>item;
		 push(item);
	}else if(input==3){
		pop();
	}else if(input==4){
		break;
	}else{
		cout<<"!Invalid Input"<<endl;
	}
}
	return 0;
	
}

void push(int item){  
	    
		top++;
		stack[top]=item;
		cout<<"inserted values"<<endl; 
	}
	

void pop(){
	if(top==-1){
		cout<<"stack is empty"<<endl;
	}else{		 
		top--;
	}	 
}
void view(){
	if (top>=0){		 
		for(int i=top;i>=0;i--){
		cout<<stack[i]<<endl;		 
		}	
	}else{
		cout<<"stack is empty"<<endl;		
	}	
}







