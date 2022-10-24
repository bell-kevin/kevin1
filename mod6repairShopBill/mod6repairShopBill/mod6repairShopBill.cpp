// mod6repairShopBill.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function prototypes
void calculateCosts(double* labor, double* parts, double* subtotal);
void calculateFees(double* shopFee, double* tax, double* total);
string convertToString(double num);
string formatCurrency(double num);
double shopFee, hourlyLaborRate = 50.00, tax;
int main()
{
	cout << "Mod. 6 Repair Shop Bill\n\n";
	cout << "Enter the hours of labor: ";
	double hoursOfLabor, partsCharge, subtotal, total;
	cin >> hoursOfLabor;
	cout << "Enter the parts charge: ";
	cin >> partsCharge;
	calculateCosts(&hoursOfLabor, &partsCharge, &subtotal);
	calculateFees(&shopFee, &tax, &total);
	system("pause");
	return 0;
} // end function main

//function to calculate the costs of labor and parts, and print out the lines on the bill for the labor charge, parts charge, and the subtotal of those items
void calculateCosts(double* labor, double* parts, double* subtotal)
{
	*subtotal = *labor * hourlyLaborRate + *parts;
	cout << "Parts: $" << formatCurrency(*parts) << fixed << setprecision(2) << endl;
	cout << "Labor: $" << formatCurrency(*labor * hourlyLaborRate) << fixed << setprecision(2) << endl;
	cout << "Subtotal: $" << formatCurrency(*subtotal) << fixed << setprecision(2) << endl;
} // end function calculateCosts

//function to calculate the shop fee, tax, and total, and print out the lines on the bill for the shop fee, tax, and the total of those items
void calculateFees(double* shopFee, double* tax, double* total)
{
	*shopFee = 20.00;
	*tax = *total * 0.06;
	*total = *shopFee + *tax + *total;
	cout << "Shop fee: $" << formatCurrency(*shopFee) << fixed << setprecision(2) << endl;
	cout << "Tax: $" << formatCurrency(*tax) << fixed << setprecision(2) << endl;
	cout << "Total: $" << formatCurrency(*total) << fixed << setprecision(2) << endl;
} // end function calculateFees

//function to convert a double to a string
string convertToString(double num)
{
	string str = to_string(num);
	return str;
} // end function convertToString

//function to format a double to currency
string formatCurrency(double num)
{
	string str = convertToString(num);
	int length = str.length();
	int decimal = str.find('.');
	if (decimal == -1)
	{
		str += ".00";
	}
	else if (length - decimal == 2)
	{
		str += "0";
	}
	return str;
} // end function formatCurrency