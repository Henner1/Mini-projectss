#include "Programmer.h"

void Programmer::show()
{
	Employee::show();
	cout << "I am programmer, i write code..." << '\n';
}

void Programmer::input()
{
	cout << "I am programmer" << '\n';
	Employee::input();

	cout << "Enter programming language: ";
	getline(cin, m_programmingLanguage);

}
