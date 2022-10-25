// mod6repairShopBill.cpp : This file contains the 'main' function.
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
string dollarFormat(string);
string dollarFormat(double);
int main()
{
	cout << "Mod. 6 Repair Shop Bill by Kevin Bell\n\n";
	cout << "Please enter the hours of labor: ";
	double laborHours;
	cin >> laborHours;
	cout << "Enter the cost of parts: ";
	double partsCost;
	cin >> partsCost;
	double laborWage = 50;
	cout << "   Parts: " << dollarFormat(partsCost) << endl;
	cout << "   Labor: " << dollarFormat(laborHours * laborWage) << endl;
	double subtotal = partsCost + laborHours * laborWage;
	cout << "Subtotal: " << dollarFormat(subtotal) << endl;
	double shopFee = subtotal * .05;
	cout << "Shop Fee: " << dollarFormat(shopFee) << endl;
	cout << "     Tax: " << dollarFormat(subtotal * .04) << endl;
	cout << "   Total: " << dollarFormat(subtotal + shopFee + subtotal * .04) << endl;
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
