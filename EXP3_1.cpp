#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\n\n* SMALLEST AND LARGEST INTEGER *\n\n\n" << endl;
	
	double averageOfAnArray = 0.0;
	int numElements = 10;
	int smallestInt, largestInt;
	int num[numElements];
	
	for (int k=0; k < numElements; k++)
	{
		cout << " Enter the Value " << k+1 << ": "; cin >> num[k];
		
		if (k == 0)
		{
			smallestInt = num[k];
			largestInt = num[k];
			averageOfAnArray += num[k]/numElements;
		}
		
		else
		{
			if (smallestInt > num[k])
			{
				smallestInt = num[k];
			}
			if (largestInt < num[k] )
			{
				largestInt = num[k];
			}
			averageOfAnArray += num[k]/numElements;
		}
	}
	
	cout << "\n\n -> The smallest value is "<< smallestInt;
	cout << "\n -> The largest value is " << largestInt;
	cout << "\n -> The average value is " << averageOfAnArray;
	
	cout << "\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout << "\n\n\t\t       ---------------KEN--------------\n\n";

	return 0;
}
