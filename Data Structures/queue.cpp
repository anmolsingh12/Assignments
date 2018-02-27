// C Program to implement Queue data structure

#include<iostream>
using namespace std;

#define MAX 10

int Queue[MAX];
int front = -1, rear = -1;
	
void enQueue( int );
void deQueue();
void print_Queue();


int main()
{
	int choice, num;
	
	while (1)
	{
		cout << "\nSelect your choice : \n";
		cout << "\n 1. Insert Element in Queue\n";
		cout << "\n 2. Delete Element from Queue\n";
		cout << "\n 3. Print Queue\n";
	
		cin >> choice;
		
		switch (choice)
		{
			case 1 : cout << "\n Enter Element to Insert in Queue\n";
					cin >> num;
					enQueue(num);
					break;
					
			case 2 : deQueue();
					break;
					
			case 3 : print_Queue();
					exit(0);
					break;
		}	
	}
return 0;
}

void print_Queue()
{
	for ( int i = 0; i < rear; i++ )
	cout << Queue[i] << " ";
}

void enQueue( int num )
{
	 	if (rear == MAX - 1 )
	 	cout << "\nQueue is Full\n";
	 	
	 	else if ( rear == -1 && front == -1 )
	 	{
	 		front = 0;
			rear = 0;
			Queue[rear] = num;
			rear++;		
		}
		
		else
		{
			Queue[rear] = num;
			rear++;
		}
}

void deQueue()
{
	if ( front = rear == -1 )
	cout << "\nQueue is empty!! Nothing to Dequeue\n";
	
	else 
	{
		cout << "\nDequeued Element is : " << Queue[--rear];
		rear--;
	}
}
