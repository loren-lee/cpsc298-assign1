/** @author Loren Lee
* Student ID: 2348052
* lorlee@chapman.edu
* CPSC298-01
* Assignment 1: The Basics, Problem firecapacity
*/
#include <iostream>

/* This program determines whether a meeting room is in violation of fire law
regulations regarding the maximum room capacity. */

using namespace std;
int main (int argc, char **argv){
  /** An int representing the maximum room capacity*/
  int maxCapacity;
  /** An int representing the number of people in the meeting*/
  int numPeople;
  /** An int representing the number of additional people that may attend the meeting*/
  int additionalPeople;

  /** Inputs the maximum room capacity and number of people in the meeting*/
  cout << "Enter maximum room capacity: " << endl;
  cin >> maxCapacity;
  cout << "Enter number of people to attend the meeting: " << endl;
  cin >> numPeople;

  /** Calculates the number of additional people that may attend the meeting*/
  additionalPeople = maxCapacity - numPeople;

  /** Tests if the number of people is less than the max room capacity
  * Outputs the number of additional people that may attend the meeting
  */
  if(numPeople <= maxCapacity){
    cout << "It is legal to hold the meeting. " << additionalPeople
    << " additional people may attend." << endl;
    return 0;
  }

  /** Outputs the number of people that must be excluded in order to meet fire regulations*/
  additionalPeople = -additionalPeople;
  cout << "The meeting cannot be held as planned due to fire regulations. "
  << additionalPeople << " people must be excluded." << endl;
  return 0;
}
