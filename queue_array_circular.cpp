#include<iostream>
using namespace std;

#define n 5
int front=-1;
int rear=-1;
int q[1100];
int temp;
void insert(int it){
	if(rear+1==n){
		cout<<"queue overflow"<<endl;
	}
	else if(front==-1){
		front=0;
		rear=0;
		q[rear]=it;
		cout<<it<<" added"<<endl;
	}
	else{
		rear+=1;	
		q[rear]=it;
		cout<<it<<" added"<<endl;
	}
}

void remove(){
	int item;
	if(front==-1){
		cout<<"queue underflow"<<endl;
	}
	else{
		item=q[front];
		
		if(front==rear){
			front=rear=-1;
		}
		else{
			front+=1;
		}
		cout<<item<<" removed"<<endl;
	}
}

void traverse(){
	int i;
	for(i=front;i<=rear;i++){
		cout<<q[i]<<" ";
	}
}

int main(){
	int i, item;
	int max, min = 0;
	char c;
	
	cout<<"enter i to add, r to remove";
	cin>>c;
	while(c=='i'){
		cin>>item;
		insert(item);
		cin>>c;
	}
	while(c=='r'){
		remove();
		cin>>c;
	}
	
	traverse();
	
}

