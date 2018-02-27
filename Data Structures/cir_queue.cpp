// Circular queue implementation using OOP concepts
// Bug if queue gets full then nothing works
#include<iostream>
#define MAX 10
using namespace std;

class Queue{
	
	private :
		
		int queue[MAX];
		int front, rear, temp;	
		
	public :
		
		Queue()
		{
			front = -1;
			rear = -1;			
		}
		
		void enqueue( int num )
		{
			
			if ( front == 0 && rear == MAX - 1 || rear + 1 == front )
			cout << "\nQUEUE FULL\n";
			
			if ( rear == MAX - 1 )
			rear = 0;
			
			else
			{
				rear++;
				queue[rear] = num;
				
				if ( rear + 1 == front )
				cout << "\nQUEUE FULL\n";
			}		
			
			if (front == -1)
			front = 0;
		}
		
		void dequeue()
		{
			if ( front == -1 )
			cout << "\nQueue is Empty\n";
			
			else
			{
				temp = queue[front];
				cout << "\nDequeued Elements is : " << queue[front];
				
				if (front == rear)
				{
					front = -1;
					rear = -1;	
					cout << "\nQueue is Empty\n";
					exit(0);
				}
			}
			
		
			if ( front == MAX - 1 )
			front = 0;
			
			else
			front++;
		}
		
		void print_queue()
		{
			for ( int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		}
};

int main()
{
	Queue Q;
	int choice, num;
	
	while (1)
	{
		cout << "\nSelect your choice : \n";
		cout << "\n 1. Insert Element in Queue\n";
		cout << "\n 2. Delete Element from Queue\n";
		cout << "\n 3. Print Queue\n";
		cout << "\n 4. Exit\n";
	
		cin >> choice;
		
		switch (choice)
		{
			case 1 : cout << "\n Enter Element to Insert in Queue\n";
					cin >> num;
					Q.enqueue(num);
					break;
					
			case 2 : Q.dequeue();
					cout << "\n";
					Q.print_queue();
					break;
					
			case 3 : Q.print_queue();
					break;
			
			case 4 : exit(0);
			
			default : cout << "\nWrong Choice! Try Again\n";
		}	
		
	}
return 0;
}
