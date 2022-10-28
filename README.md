# mod6repairShopBill

This exercise demonstrates your competency in the skills learned in this module. You must complete this exercise on your own, without any help from an instructor or another student. If you get stuck, go back through the relevant sections in the book, the quizzes, and the assignments for this module -- everything you need to do in this exercise has been covered in this and previous modules.

These are skills you practiced in this and previous modules and will now demonstrate:

Creating and using pointers
Using C-Strings and the String class
Creating and using arrays
Creating and using 2D arrays
Sorting arrays
Searching arrays
Creating and using vectors
Writing and using structures
Writing and using classes
Writing and using functions
Passing parameters to functions
Returning values from functions
Using loops
Reading input and writing output
 

Module 6 Competency Project: Repair Shop Bill

Create a project that calculates the bill at a repair shop. The bill includes:

labor charge, which is the number of hours of labor entered by the user charged at the rate of $50.00/hour.
parts charge, which is a double entered by the user
shop fee, which is the total of the labor and parts charges times the shop fee rate of 5%
tax, which is the total of the labor charge, parts charge, and shop fee, times the tax rate of 4%
total, which is the sum of the labor charge, parts charge, shop fee, and tax
Print out a bill with the line items listed above, with all numbers formatted as currency.

Ask the user for the hours of labor and the cost of the parts. Call a function to calculate the costs of labor and parts; use pointers only for the parameters. This function will also print out the lines on the bill for the labor charge, parts charge, and the subtotal of those items. Call another function to calculate the shop fee and the tax, using pointers only for the parameters. This function will also print out the lines on the bill for the shop fee, tax, and total. The shop fee rate, hourly labor rate, and tax rate should be declared as global variables, available in all functions without being passed into them. Include the functions to convert a numeric variable into a string, and to format strings into currency. All numeric output must be formatted as currency.

![M6 Competency running](https://github.com/bell-kevin/mod6repairShopBill/blob/main/repairBill.PNG)

Create a table of at least 3 test cases BEFORE you write and run your project to calculate the correct results for different sets of input. Make sure you calculate the correct answers for each line in the output, and verify that your program generates the same numbers. Run your code, enter the data from each test case, and compare your results to those test cases. Take screenshots of all 3 results.

 ![p](https://github.com/bell-kevin/mod6repairShopBill/blob/main/repairBill000.PNG)

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots, the table of test cases  AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
