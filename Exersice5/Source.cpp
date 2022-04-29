#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	int number1, number2;
	cout << "¬ведите ваше число: " << endl;
	cin >> number1;

	cout << "¬ведите ваше второе число: " << endl;
	cin >> number2;

	if (number1 > number2)
	{
		cout << "¬аше число больше" << endl;
	}
	else
	{
		cout << "¬аше число меньше" << endl;
	}
	return 0;
}