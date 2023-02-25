/*
	Employee Database Project
	Jacob Coble
	2/25/23
*/

#include "employee.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

Employee::Employee(string empName, string empJob, double empWage)
{
	name = empName;
	jobTitle = empJob;
	wage = empWage;
}