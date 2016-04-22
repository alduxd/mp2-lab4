#include "polinom.h"

void main()
{
	try
	{
		int f = 0;
		Polinom *p1 = new Polinom;
		cout << "Enter the polinom " << endl;
		cin >> (*p1);
		Polinom *p2 = new Polinom;
		cout << "Enter the polinom " << endl;
		cin >> (*p2);
		system("cls");
		cout << "First polinom p1=: " << endl << *p1 << endl;
		cout << "Second polinom p2: " << endl << *p2 << endl;
		cout << "Select the operation:" << endl;
		cout << "1. Addition(p1+p2)" << endl;
		cout << "2. Subtraction(p1-p2)" << endl;
		cout << "3. Multiplication(p1*p2)" << endl;
		cin >> f;
			switch (f)
			{
			case 1: 
				{
					cout << "Result: "<< (*p1)+(*p2) << endl;
					break;
				}
			case 2: 
				{
					cout << "Result: "<< (*p1)-(*p2) << endl;
					break;
				}
			case 3: 
				{
					cout << "Result: "<< (*p1)*(*p2) << endl;
					break;
				}
			default: 
				{
					cout << "Error! Invalid input" << endl;
					break;	
				}
			}
	}
	catch (const char* error)
	{
		cout << error << endl;
	}
}
