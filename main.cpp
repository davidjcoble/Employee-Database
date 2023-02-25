/*
	Employee Database Project
	Jacob Coble
	2/25/23
*/

#include "employee.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addEmployee(vector<Employee>& employeeList);
void printEmployees(vector<Employee>& employeeList);
void calculateTotalWages(vector<Employee>& employeeList);

int main()
{
	vector<Employee> employeeList;
	bool running = true;
	cout << "This is the employee database, please choose an option below." << endl;

	while (running)
	{
		cout << endl;
		cout << "Please select an option:" << endl;
		cout << "1. Print list of employees." << endl;
		cout << "2. Calculate total wages." << endl;
		cout << "3. Add new employee." << endl;
		cout << "4. Exit application." << endl;

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (employeeList.size() == 0)
			{
				cout << "There are 0 employees in database." << endl;
			}

			else
			{
				printEmployees(employeeList);
			}
			break;

		case 2:
			if (employeeList.size() == 0)
			{
				cout << "There are 0 employees in database." << endl;
			}

			else
			{
				calculateTotalWages(employeeList);
			}
			break;

		case 3:
			addEmployee(employeeList);
			break;

		case 4:
			running = false;
			break;

		default:
			cout << "Invalid input, please try again." << endl;
			break;
		}

	}

	return 0;
}

void addEmployee(vector<Employee>& employeeList)
{
	string name;
	string jobTitle;
	double wage;

	cout << endl;
	
	cout << "Enter name of new employee: ";
	cin >> name;

	cout << "Enter position of new employee: ";
	cin >> jobTitle;

	cout << "Enter wage of new employee: ";
	cin >> wage;

	while (cin.fail() || wage < 0)
	{
		cout << "Invalid input. Please enter a valid, non-negative, number: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> wage;
	}
	Employee newEmployee(name, jobTitle, wage);
	employeeList.push_back(newEmployee);
	cout << endl << endl << "New employee added successfully." << endl;

}

void printEmployees(vector<Employee>& employeeList)
{
	cout << endl << "Employee Roster:" << endl;
	for (int i = 0; i < employeeList.size(); i++)
	{
		cout << "Name: " << employeeList[i].getName() << ", Position: " << employeeList[i].getJob() << ", Wage: $" << employeeList[i].getWage() << " per hour." << endl;
	}
}

void calculateTotalWages(vector<Employee>& employeeList)
{
	double totalWages = 0;
	for (int i = 0; i < employeeList.size(); i++)
	{
		double hours;
		cout << "Enter total number of hours worked by " << employeeList[i].getName() << ": ";
		cin >> hours;
		while (cin.fail() || hours < 0)
		{
			cout << "Invalid input. Please enter a valid, non-negative, number: ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> hours;
		}
		totalWages += hours * employeeList[i].getWage();
	}
	cout << endl << "Total wages: " << totalWages << endl;
}