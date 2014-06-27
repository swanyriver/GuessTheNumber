/***********************************************************
* Author: Brandon Swanson
* Date Created: 06-27-2014
* Last Modification Date: 06-27-2014
* Filename:Occupancy.cpp
*
* Overview:Determines if there are too many people at the party
*
* Input: occupancy / number of people
*
* Output:good party/bad party  number of people more/less
*
 ***********************************************************/



#include <iostream>
using namespace std;

int main(){
	int numPeople, maxPeople, occupancyDifference
    
    cout << "ITS PARTY TIME" << endl;
    cout << "How many people we got in here:";
    cin >> numPeople;
    
    cout << endl << "OK, And the plauqe on the wall," << endl
         << " how many people does the fire chief say we can have in here:";
    cin >> maxPeople;
    
    if (numPeople<=maxPeople) {
        cout << "PARTY ON!!!,  and qick call "
        << maxPeople-numPeople << "more party people";
    } else {
        cout << "BAD PARTY! you have got to get "
             << numPeople-maxPeople << " party people out of here now!";
    }
    
    return 0;
}
