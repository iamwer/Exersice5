#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");
	int number1, number2;
	cout << "������� ���� �����: " << endl;
	cin >> number1;

	cout << "������� ���� ������ �����: " << endl;
	cin >> number2;

	if (number1 > number2)
	{
		cout << "���� ����� ������" << endl;
	}
	else
	{
		cout << "���� ����� ������" << endl;
	}
	return 0;
}