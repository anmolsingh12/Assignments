// Insertion Sort Code

#include<iostream>
using namespace std;

void insertion_sort ( int[], int ); // Sorting Function
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
	
	insertion_sort (a, size);
	
return 0;
}

void print_array ( int a[], int size )
{
		for ( int i = 0; i < size; i++ )
		cout << a[i] << "  ";
		
		cout << endl;
}

void insertion_sort ( int a[], int size )
{
	int i, j, key;

	for ( i = 1; i < size; i++ )
	{
		key = a[i];
		j = i - 1;

		while ( j >= 0 && key < a[j] )
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	
	cout << "\nSorted Array is : \n";
	print_array (a, size);
	
}
