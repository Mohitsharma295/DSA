#include<iostream>
 
using namespace std;

int queue[100];
int front = -1, rear = -1;

void enqueue(int item);
void dequeue();
void view();

int main(){
	int input, item;	
	while(true){
	cout<<"select option" <<endl;
	cout<<"1.view"<<endl;
	cout<<"2.enqueue"<<endl;
	cout<<"3.dequeue"<<endl;
	cout<< "4. Exit"<<endl;
	cout << "Choice: ";
	cin >> input;
	void view();
	if(input == 1){
		
		view();
	} else if(input == 2){
		 cin>>item;
		enqueue(item);
	} else if(input == 3){
 
		dequeue();
	} else if(input==4){
		break;
	} else {
		cout << "Invalid Input!"<<endl;
	}
}	
	return 0;
}

void enqueue(int item){
	 	
	 
		if(rear==-1 && front==-1){
			rear++;
			front++;
			queue[rear]=item;
			cout<<"inserted values"<<endl;
		}else{
			rear++;
			queue[rear]=item;
			cout<<"increasment values"<<endl;
	}
	 
}
void dequeue(){	
	
	if(front > rear){
		rear=-1;
		front=-1;
   	}else if(front==-1 && rear==-1){
   		cout<<"queue is empty"<<endl;  		
	   }
	   
	   else{
	   front++;
	}
}		         
void view(){                                                                             
	  if(front==-1 && rear==-1){
	  	cout<<"queue is empty"<<endl;
	  }else{
	  	for(int i=front;i<=rear;i++){


	    cout<<queue[i]<<endl;
	    
	  	
	  	
	  }
	 
};
} 

