#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "\n\n* TEMPERATURE OF THE PROVINCES *\n\n\n" << endl;

	int aProvince[7];
	int bProvince[7];
	int cProvince[7];
	
	cout << "Enter all temperature for a week of";
	cout << "Province A, Province B and then Province C" << endl;
	cout << " " << endl;
	
	for (int k = 0; k < 7; k++)
	{
		cout << "Province A, Day " << k+1 <<": "; cin >> aProvince[k];
	}
	
	cout << " " << endl;
	
	for (int k = 0; k < 7; k++)
	{
		cout << "Province B, Day " << k+1 << ": "; cin >> bProvince[k];
	}
	
	cout << " " << endl;
	
	for (int k = 0; k < 7; k++)
	{
		cout << "Province C, Day " << k+1 << ": "; cin >> cProvince[k];
	}


	cout << "\n\n\nDisplaying Values" << endl;
	cout << " " << endl;
	
    
	for (int k = 0; k < 7; k++)
	{
		cout << "Province A, Day " << k + 1 << " = " << aProvince[k] << endl;
	}
	
	cout << " " << endl;
	
	for (int k = 0; k < 7; k++)
	{
		cout << "Province B, Day " << k + 1 << " = " << bProvince[k] << endl;
	}
	
	cout << " " << endl;
	
	for (int k = 0; k < 7; k++)
	{
		cout << "Province C, Day " << k + 1 << " = " << cProvince[k] << endl;
	}

	cout << "\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout << "\n\n\t\t       ---------------KEN--------------\n\n";
	
	return 0;
}



