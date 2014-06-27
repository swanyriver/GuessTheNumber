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
	int numPeople, maxPeople, occupancyDifference;
    
    cout << "ITS PARTY TIME" << endl;
    cout << "How many people we got in here:";
    cin >> numPeople;
    
    cout << endl << "OK, And the plauqe on the wall," << endl
         << " how many people does the fire chief say we can have in here:";
    cin >> maxPeople;
    
    occupancyDifference = maxPeople - numPeople;
    
    if (occupancyDifference>=0) {
        switch (occupancyDifference) {
            case 0:
                cout << "PARTY ON!!!";
                break;
                
            case 1:
                cout << "PARTY ON!!! and qick call "
                << " one more party person";
                break;
                
            default:
                cout << "PARTY ON!!!,  and qick call "
                << occupancyDifference << " more party people";
                break;
        }
    }else{ //occupanyDifferenc<0  too many people
        switch (occupancyDifference) {
            case -1:
                cout << "BAD PARTY! you have got to get "
                << " one party person out of here now!";
                break;
                
            default:
                cout << "BAD PARTY! you have got to get "
                << occupancyDifference*-1 << " party people out of here now!";
                break;
        }
    }
    
    cout << endl;
    
    return 0;
}
