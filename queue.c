#include <stdlib.h>
#include <stdio.h>
#define size 6   //size of queue

int queue[size]; 
int front, rear, avg; 
int k, num;
int choice; 

//functions:
void enqueue(), display(), mid();
int prime();
	
int prime(){
	num =  rand() % 100; //get random integers
    int flag = 0, i ;
    
	//check if the integer is prime   
    for( i = 2; i <= num/2; i++) {
        if(num % i == 0) {
        	flag = 1;
        	break;
        }
    } 
    if(flag == 0){
        //num is prime
        prime();
    }
    else
       //num is not prime 
    return num;
}
       
void enqueue(){
	if (rear == 5){
		printf("Queue overflowed \n");
	}
		
	else {
		if (front == - 1)
		front= 0;
		rear++;
		queue[rear] = prime ();
	}  
}

void mid(){ //find the middle element
	avg = size / 2;
	printf("Middle element is: %d ", queue[avg]);
}

void display(){
	
	if (front == - 1){
		printf("Queue is free\n");
	}
	else{
		printf("Queue: ");
		for ((k = 1); k <= rear; k++){
			printf("%d", queue[k]);
			if(k!=rear){
			printf("-> ");}	
		}
		printf("\n");
	}
}


int main(){  

int j;
for (j=0; j<5; j++){
  	
	enqueue(); //place nums
	}
	
	display(); //print the queue
	
	mid(); 
}

