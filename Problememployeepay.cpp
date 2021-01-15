/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 1: The Basics, Problem employeepay
*/
#include <iostream>

/* This program reads in the number of hours worked in a week outputs
the worker’s gross pay, each withholding amount, and the net take-home pay
for the week. */

using namespace std;
int main (int argc, char **argv){
  /** An int representing the number of hours worked in a week*/
  int numHoursWorked;
  /** A double representing the worker's gross pay*/
  double grossPay;
  /** A double representing the amount withheld for Social Security tax*/
  double withholdSocial;
  /** A double representing the amount withheld for federal income tax*/
  double withholdFederal;
  /** A double representing the amount withheld for state income tax*/
  double withholdState;
  /** A double representing the amount withheld for medical insurance*/
  double withholdMedical = 10.00;
  /** A double representing the net take-home pay*/
  double netPay;

  /** Inputs the number of hours worked in a week*/
  cout << "Enter number of hours worked: " << endl;
  cin >> numHoursWorked;

  /** Tests if the number of hours worked is less than 40
  * Outputs the gross pay, each withholding amount, and the net pay
  */
  if(numHoursWorked <= 40){
    grossPay = 16.00 * numHoursWorked;
    withholdSocial = grossPay * 0.06;
    withholdFederal = grossPay * 0.14;
    withholdState = grossPay * 0.05;
    netPay = grossPay - (withholdSocial + withholdFederal + withholdState + 10);
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Social Security Tax: $" << withholdSocial << endl;
    cout << "Federal Income Tax: $" << withholdFederal << endl;
    cout << "State Income Tax: $" << withholdFederal << endl;
    cout << "Medical Insurance: $" << withholdMedical << endl;
    cout << "Net Take-Home Pay: $" << netPay << endl;
    return 0;
  }

  /** Outputs the gross pay, each withholding amount, and the net pay when the
  * employee works overtime
  */
  grossPay = 16.00 * 1.50 * numHoursWorked;
  withholdSocial = grossPay * 0.06;
  withholdFederal = grossPay * 0.14;
  withholdState = grossPay * 0.05;
  netPay = grossPay - (withholdSocial + withholdFederal + withholdState + 10);
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security Tax: $" << withholdSocial << endl;
  cout << "Federal Income Tax: $" << withholdFederal << endl;
  cout << "State Income Tax: $" << withholdFederal << endl;
  cout << "Medical Insurance: $" << withholdMedical << endl;
  cout << "Net Take-Home Pay: $" << netPay << endl;

  return 0;
}
