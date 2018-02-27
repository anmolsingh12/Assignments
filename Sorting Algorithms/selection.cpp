// Selection Sort code

#include<iostream>
using namespace std;

void selection_sort ( int[], int ); // Sorting Function
void print_array(int[], int ); //Prints the whole array

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
	
	selection_sort(a, size);
	
return 0;
}

void print_array ( int a[], int size )
{
		for ( int i = 0; i < size; i++ )
		cout << a[i] << "  ";
		
		cout << endl;
}

void selection_sort ( int a[], int size )
{
	for ( int i = 0; i < size - 1; i++ )
	{
		int min  = i;
		for ( int j = i + 1;  j < size; j++ )
		{
			if (a[j] < a[min])
			min = j;
		}
		
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;	
	}
	cout << "\nSorted Array is : \n";
	print_array (a, size);
}