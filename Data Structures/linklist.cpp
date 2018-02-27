// Implementing Link List using OOP concepts

#include<iostream>
using namespace std;

class Linklist{
	
	private :
		
		struct node
		{
			int data;
			int *next;
		} *p;
		
		Linklist()
		{
			p = NULL;
		}
		
		void addnode( int num ) // Adds a new node at the end of the linklist
		{
			node *ptr, *temp;
			
			if ( p == NULL )
			{
				p = new node;
				p->data = num;
				p->next = NULL;
			}
			
			else
			{
				ptr = p;
				
				while ( ptr->next != NULL )
				ptr = ptr->next;
				
				temp = new node;
				temp->data = num;
				temp->next = NULL;
				ptr->next = temp;
			}
		}
		
		void add_at_beg( int num )
		{
			node *ptr;
			
			ptr = new node;
			ptr->data = num;
			ptr->next = p;
			p = ptr;
		}
		
		// no_node = number of nodes after which the element is to be added
		void add_after( int no_node, int num ) 
		{
			node *ptr, *temp;
			
			for ( int i = 0, ptr = p; i < no_node; i++ )
			{
				ptr = ptr->next;
				
				if ( ptr == NUll )
				{
					cout << "\nThere are not sufficient number of elements in linklist\n";
					return;
				}
			}
			
			temp = new node;
			temp->data = num;
			temp->next = ptr->next;
			ptr->next = temp;
		}
		
		void delete( int num )
		{
			node *ptr, node *temp;
			
			ptr = p;
			
			if ( ptr->data == num ) // if you wish to delete first node
			{
				p = ptr->next;
				delete ptr;
				return;
			}
			
			temp = ptr;
			
			while ( ptr != NULL )
			{
				if ( ptr->data == num )
				{
					temp->next = ptr->next;
					delete ptr;
					return;
				}
			
			temp = ptr;
			ptr = ptr->next;
		
			}
			cout << endl << "\nElement " << num <<"not found\n";
			}
		
	
	
		
};
