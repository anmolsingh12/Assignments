// Bubble Sort

#include<iostream>
using namespace std;

void bubble_sort ( int[], int ); // Sorting Function
void print_array (int[], int ); //Prints the whole array

int main()
{
	int size;
	
	cout << "\nEnter Size of Array : \n";
	cin >> size;
	
	int a[size];
	
	cout << "\nEnter Array Elements : \n";
	for (int i = 0; i < size; i++ )
	cin >> a[i];

	cout << "\nUnsorted Array is : \n";
	print_array (a, size);
	
	bubble_sort (a, size);
	
return 0;
}

void print_array ( int a[], int size )
{
		for ( int i = 0; i < size; i++ )
		cout << a[i] << "  ";
		
		cout << endl;
}

void bubble_sort ( int a[], int size )
{
	int temp;
	for( int i = 0; i < size; i++ )
	{
		for ( int j = 0; j < size - i  - 1; j++ )
		{
			if ( a[j] > a[j+1] )
			{
				temp  = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
			}
			
		}
	}
	cout << "\nSorted Array is : \n";
	print_array (a, size);
	
}
