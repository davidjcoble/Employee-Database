/*
	Employee Database Project
	Jacob Coble
	2/25/23
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
	Employee(string empName, string empJob, double empWage);

	string getName();
	string getJob();
	double getWage();
	void setName(string empName);
	void setJob(string empJob);
	void setWage(double empWage);

private:
	string name;
	string jobTitle;
	double wage;
};

#endif