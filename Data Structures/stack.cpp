// Implementing Stack using OOP concepts

#include<iostream>
using namespace std;

#define MAX 10

class Stack{
	private :
		int stack[MAX];
		int top;
	
	public :
		Stack()
		{
			top = -1;
		}
		
		void push( int num )
		{
			if ( top == MAX - 1 )
			cout << "\nOverflow\n";
			
			else
			stack[++top] = num;
		}
		
		void pop()
		{
			if ( top == -1 )
			cout << "\nUnderflow\n";
			
			else
			{
				cout << stack[top] << " ";
				top--;
			}
		}

};

int main()
{
	Stack s;
	
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	s.push(16);
	s.push(17);
	s.push(18);
	s.push(19);
	s.push(20);
	s.push(21);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
return 0;
}
