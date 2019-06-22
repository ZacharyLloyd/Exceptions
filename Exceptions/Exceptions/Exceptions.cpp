#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

int main()
{
	string input;
	int num = 0;
	vector <int> myVector(4, 0);
	do
	{
		//Ask user for input
		cout << "Enter an interger (99 to end). " << endl;
		cin >> input;
		//Starting the exception
		try
		{
			//Changing input from string to int
			num = stoi(input);
			//If num = 0 throw for exception
			if (num == 0)
			{
				throw "Sorry you cannot divide by zero.";
			}
			//At what position in the vector
			else
			{
				myVector.at(0) = 100 / num;
			}
			//If not 99 display the input
			if (num != 99)
			{
				cout << "Input = " << num << endl;
			}
			//If greater than 100 throw for exception
			if (num >= 100)
			{
				throw 100;
			}
			//This is my last exception it's not the greatest
			//Just throw 20.0 for exception
			//Will still display the number though
			throw 20.0;
		}
		//If the int entered is out of range that is allowed
		catch (int a)
		{
			cout << "An exception has occurred for entering an invalid integer. Exception " << a << endl;
		}
		//If the user inputs 20.0 tell them to not do not
		//even though it will still display 20
		catch (double b)
		{
			cout << "Please do not use a double." << endl;
		}
		//This is for stoi
		catch (exception& c)
		{
			cout << "Exception: " << c.what() << endl;
		}
		//If the user inputs zero
		catch (...)
		{
			cout << "Cannot divide by zero." << endl;
		}
	} while (num != 99);
	cout << "End of program." << endl;
	system("pause");
	return 0;
}