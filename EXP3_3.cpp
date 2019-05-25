#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\n\n* DISPLAYING LETTERS IN REVERSE ORDER *\n\n\n" << endl;
	
    char array[50];
    int sizeOfTheArray;
    
    cout << "Enter array size: ";
	cin >> sizeOfTheArray;

    for (int k = 0; k < sizeOfTheArray; k++)
    {
        cout << "\nEnter a character: ";
        cin >> array[k];
    }
	
	cout << " " << endl;
	cout << " " << endl;
	
    for (int k = sizeOfTheArray; k >= 0; k--)
    {
        cout << array[k];
    }
	
	cout << "\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout << "\n\n\t\t       ---------------KEN--------------\n\n";
	
	return 0;
}

