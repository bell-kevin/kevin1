// mod6rep// mod6repairShopBill.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
string dollarFormat(string);
string dollarFormat(double);
double laborWage = 50.00, laborHours, partsCost, subtotal, shopFee, tax;
void calcLaborCostAndPartsCostAndSubtotal(double, double, double);
int main()
{
	cout << "Mod. 6 Repair Shop Bill by Kevin Bell\n\n";
	cout << "Please enter the hours of labor: ";
	cin >> laborHours;
	cout << "Enter the cost of parts: ";
	cin >> partsCost;
	calcLaborCostAndPartsCostAndSubtotal(laborHours, partsCost, laborWage);
	shopFee = subtotal * .05;
	cout << "Shop Fee: " << dollarFormat(shopFee) << endl;
	cout << "     Tax: " << dollarFormat((subtotal+shopFee) * .04) << endl;
	tax = (subtotal + shopFee) * .04;
	cout << "   Total: " << dollarFormat(subtotal + shopFee + tax) << endl;
	system("pause");
	return 0;
}

//**************************************************************
// Returns a $-formatted version of the input string.          *
//**************************************************************
string dollarFormat(string original)
{
	string formatted = original; // formatted string to return
	int decimalPos = formatted.find('.'); // position of decimal
	int pos = decimalPos; // position to insert commas

	while (pos > 3) // insert commas until pos is less than 3
	{
		pos -= 3; // move pos back 3 spaces
		formatted.insert(pos, ","); // insert comma
	} // end while loop
	formatted.insert(0, "$"); // insert dollar sign
	return formatted; // return formatted string
} // end dollarFormat


//**************************************************************
// Returns a $-formatted version of the input double.          *
//**************************************************************
string dollarFormat(double value) {

	//creat ostringstream oject
	ostringstream ostr;

	//set format flags
	ostr << fixed << setprecision(2);

	//insert value into stream
	ostr << value;

	//return formatted string
	return dollarFormat(ostr.str());
} // end dollarFormat

//function to calculate the costs of labor and parts. function will also print out the lines on the bill for the labor charge, parts charge, and the subtotal of those items.
void calcLaborCostAndPartsCostAndSubtotal(double laborHours, double partsCost, double laborCost) {
	laborCost = laborHours * laborWage;
	partsCost = partsCost;
	subtotal = laborCost + partsCost;
	cout << "   Parts: " << dollarFormat(partsCost) << endl;
	cout << "   Labor: " << dollarFormat(laborCost) << endl;
	cout << "Subtotal: " << dollarFormat(subtotal) << endl;
} //end calcLaborCostAndPartsCostAndSubtotal
