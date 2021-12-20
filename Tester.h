#pragma once

#include "Employee.h"

class Tester : public Employee
{
private:
	string m_category;

public:
	Tester();

	Tester(int id, string name);

	void input() override;

	void show() override;
};