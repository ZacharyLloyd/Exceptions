#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

void main()
{
	string input;
	int num = 0;
	vector <int> myVector(4, 0);
	do
	{
		cout << "Enter an interger (99 to end). " << endl;
		cin >> input;
		//Starting the exception
		num = stoi(input);
		try
		{
			if (num == 0)
			{
				throw "Sorry you cannot divide by zero.";
			}
			else
			{
				myVector.at(0) = 1000 / num;
			}
			if (num != 99)
			{
				cout << "Input = " << num << endl;
			}
			if (num >= 100)
			{
				throw 100;
			}
		}
		catch (int a)
		{
			cout << "An exception has occurred for entering an invalid integer. Exception " << a << endl;
		}
		catch (char * msg)
		{
			cout << msg << endl;
		}
		catch (exception& c)
		{
			cout << "Exception: " << c.what() << endl;
		}
		catch (...)
		{
			cout << "Catch others." << endl;
		}
	} while (num != 99);
	cout << "End of program." << endl;
	system("pause");
}