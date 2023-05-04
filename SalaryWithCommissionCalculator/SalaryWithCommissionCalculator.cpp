// SalaryWithCommissionCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double baseSalary = 3600;
	double commissionPercent = 5;					 // 5% commission
	double commissionRate = commissionPercent / 100; // 5% commission
	double totalSales = 23800;
	double salesQuota = 17000;
	double salesOverQuota = 0;
	if (totalSales > salesQuota)
	{
		salesOverQuota = totalSales - salesQuota;
	}
	double commissionPay = salesOverQuota * commissionRate;
	double grossPay = baseSalary + commissionPay;
	double FICA = grossPay * 0.0765;				 // FICA witholding = 7.65% of Gross Pay
	double incomeTax = grossPay * 0.25;				 // Federal income tax = 25% of Gross Pay
	double netPay = (grossPay - FICA - incomeTax);

	cout << "For the follwing, please enter monthly data points...\n\n"
		"Please enter your Commission Percentage: ";
	cin >> commissionPercent;
	cout << "Please enter your Base Salary: $";
	cin >> baseSalary;
	cout << "Please enter your Total Sales: $";
	cin >> totalSales;
	cout << "Please enter your Sales Quota: $";
	cin >> salesQuota;

	cout << setprecision(2) << fixed << endl << endl;

	cout << left << setw(25) << "Total Sales";
	cout << right << "$" << setw(10) << totalSales << endl;
	
	cout << left << setw(25) << "Sales Quota";
	cout << right << "$" << setw(10) << salesQuota << endl << endl;

	cout << left << setw(25) << "Sales Over Quota";
	cout << right << "$" << setw(10) << salesOverQuota << endl;

	cout << left << setw(25) << "Commission Percent";
	cout << right << "%" << setw(10) << commissionPercent << endl;

	cout << left << setw(25) << "Commission Rate";
	cout << right << " " << setw(10) << commissionRate << endl << endl;

	cout << left << setw(25) << "Commission Pay";
	cout << right << "$" << setw(10) << commissionPay << endl;

	cout << left << setw(25) << "Base Salary";
	cout << right << "$" << setw(10) << baseSalary << endl;

	cout << left << setw(25) << "Gross Pay";
	cout << right << "$" << setw(10) << grossPay << endl << endl;

	cout << left << setw(25) << "FICA witholdings";
	cout << right << "$" << setw(10) << FICA << endl;

	cout << left << setw(25) << "Income Tax witholdings";
	cout << right << "$" << setw(10) << incomeTax << endl << endl;

	cout << left << setw(25) << "Your Net Pay";
	cout << right << "$" << setw(10) << netPay << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
