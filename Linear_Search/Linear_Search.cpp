#include <iostream>
using namespace std;

int arr[20];		// Array to be search
int n;				// Number of selements in the Array
int i;				// Index of Array element

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the Array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	// Accept Array elements
	cout << "\n----------------------\n";
	cout << " Enter array elements \n";
}