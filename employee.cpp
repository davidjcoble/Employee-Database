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

string Employee::getName()
{
	return name;
}

string Employee::getJob()
{
	return jobTitle;
}

double Employee::getWage()
{
	return wage;
}

void Employee::setName(string empName)
{
	name = empName;
}

void Employee::setJob(string empJob)
{
	jobTitle = empJob;
}

void Employee::setWage(double empWage)
{
	wage = empWage;
}