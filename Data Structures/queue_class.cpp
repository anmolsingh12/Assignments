#include<iostream>
#define MAX 10
using namespace std;

class Queue{
	
	private :
		
		int queue[MAX];
		int front, rear, temp;
		int i;
		
		
	public :
		
		Queue()
		{
			front = -1;
			rear = -1;			
		}
		
		void enqueue( int num )
		{
			if ( front == 0 && rear == MAX - 1 )
			cout << "\nQUEUE FULL\n";
			
			else
			{
				rear++;
				queue[rear] = num;
				
				if ( front == 0 && rear == MAX - 1 )
				cout << "\nQUEUE FULL\n";
				
			}
			
			if ( front = -1 )
			front++;
		}
		
		void dequeue()
		{
			if ( front == -1 )
			cout << "\nQueue is Empty\n";
			
			
			temp = queue[front];
			cout << "\nDequeued Elements is : " << queue[front];
		
			if ( front == rear )
			{
				front = rear = -1;
				if ( front == -1 )
				cout << "\nQueue is Empty\n";
				exit(0);
			}
			
			else
			front++;
		}
		
		void print_queue()
		{
			for ( i = front; i <= rear; i++)
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
