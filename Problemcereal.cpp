/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 1: The Basics, Problem cereal
*/
#include <iostream>

/* This program reads the weight of a package of cereal in ounces and outputs
the weight in metric tons as well as the number of boxes needed
to yield one metric ton of cereal. */

using namespace std;
int main (int argc, char **argv){
  /** A double representing the package of cereal weight in ounces*/
  double weightOunces;
  /** A double representing the package of cereal weight in tons*/
  double weightTons;
  /** An int representing the number of boxes needed for one ton of cereal*/
  int numBoxes;

  /** Inputs the weight of a package in ounces*/
  cout << "Enter weight of a package of cereal in ounces: " << endl;
  cin >> weightOunces;

  /** Calculates the weight of a package in tons*/
  weightTons = weightOunces / 35273.92;

  /** Outputs the weight of a package in metric tons*/
  cout << "The package of cereal is " << weightTons << " tons." << endl;

  /** Calculates the number of boxes for one metric ton of cereal*/
  numBoxes = 35273.92 / weightOunces;
  /** Outputs the number of boxes needed for one metric ton of cereal*/
  cout << "Boxes needed to yield one metric ton of cereal: " << numBoxes << endl;

  return 0;
}
