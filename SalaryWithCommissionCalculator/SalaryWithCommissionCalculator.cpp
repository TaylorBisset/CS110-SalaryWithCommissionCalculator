// SalaryWithCommissionCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double baseSalary = 3600;
	double commissionRate = 0.05;	// 5% commission
	double salesQuota = 17000;
	double totalSales = 23800;
	double commissionPay = 0;
	if (totalSales > salesQuota) {
		commissionPay = totalSales - salesQuota;
	}
	double grossPay = baseSalary + commissionPay;
	double FICA = grossPay * 0.0765;			// FICA witholding = 7.65% of Gross Pay
	double incomeTax = grossPay * 0.25;		// Federal income tax = 25% of Gross Pay
	double netPay = (grossPay - FICA - incomeTax);
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
