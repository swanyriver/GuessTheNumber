/***********************************************************
 * Author: Brandon Swanson
 * Date Created: 06-27-2014
 * Last Modification Date: 06-27-2014
 * Filename:arcade.cpp
 *
 * Overview:Calculates the number of candybars and gumballs the
 * customer can purchase with coupons  EDITED FROM arcade.cpp
 * change to calculate purchases with loops
 *
 * Input: number of coupons
 *
 * Output: division of candybars, gumbals, coupons
 *
 ***********************************************************/


#include <iostream>
using namespace std;

int main(){
    const int CANDY_BARS_PRICE = 10;
    const int GUMBALLS_PRICE = 3;
	int numCoupons, couponsRemaining;
    int candybarsBought = 0;
    int gumballsBought = 0;

    //get number of coupons
    cout << "Its 10 coupons for a candybar ([HERSH]) and 3 for a gumball (*)"
         << endl << "How many coupons ($) do you have:";
    cin >> numCoupons;
    
    couponsRemaining=numCoupons;
    
    //calculate candbars
    while (couponsRemaining>=CANDY_BARS_PRICE) {
        candybarsBought++;
        couponsRemaining-=CANDY_BARS_PRICE;
    }
    
    //calculate gumballs
    while (couponsRemaining>=GUMBALLS_PRICE) {
        gumballsBought++;
        couponsRemaining-=GUMBALLS_PRICE;
    }

    //TEST OUTPUT
    /*********************
    cout << "cb:" << candybarsBought
         << " gumballs:" << gumballsBought
         << " coupons remaining:" << couponsRemaining;
    
    return 0;
    **********************/
    
    cout << "Thank you for your purchase, you now have:" << endl;
    
    for (int i=1; i<=candybarsBought; i++) {
        cout << "[HERSH] ";
    }
    for (int v=1; v<=gumballsBought; v++) {
        cout << "* ";
    }
    for (int m=1; m<=couponsRemaining; m++) {
        cout << "$ ";
    }
}
