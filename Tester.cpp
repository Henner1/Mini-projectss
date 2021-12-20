#include "Tester.h"

Tester::Tester()
	: Employee{}
{
}

Tester::Tester(int id, string name)
	: Employee{ id, name }
{
}

void Tester::input()
{
	cout << "I am Tester" << '\n';

	Employee::input();

	cout << "Enter category: ";
	getline(cin, m_category);
}

void Tester::show()
{
	Employee::show();
	cout << "I am tester, i test software programms..." << '\n';
}