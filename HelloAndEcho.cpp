/**********************
 * Hello World
 * Brandon Swanson
 * June 23rd 2014
 * *******************/

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
