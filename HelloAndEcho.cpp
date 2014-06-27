/***********************************************************
* Author: Brandon Swanson
* Date Created: 06-23-2014
* Last Modification Date: 06-23-2014
* Filename:HelloAndEcho.cpp
*
* Overview:Says hello to me, asks me my feelings, tells me my feelings
*
* Input: My Feelings, How Many Days
*
* Output:It agrees with my feelings and comiserates
*
 ***********************************************************/



#include <iostream>
using namespace std;

int main(){
	string feeling;
	int numDays;

	cout << "Hello Brandon, How are you today?";
	cin >> feeling;
	cout <<endl << "Amazing, I am also feeling " << feeling;
	cout << " today" << endl;

	cout << endl  << "for how many days have you felt that way?";
	cin >> numDays;
	cout << "Oh Wow  " << numDays
	     << " days, I am (happy/sorry) to hear that" << endl;

	return 0;
}
