/***********************************************************
* Author: Brandon Swanson
* Date Created: 06-24-2014
* Last Modification Date: 06-24-2014
* Filename: numberGuess.cpp
*
* Overview: Two users compete, one enters a secret number and
* 	the other uses the updated range of possible numbers
*	to narrow down their guesses
*
* Input: A Secret Number, Guesses at the Secret Number
*
* Output: Either the user has Won the game (correctly guessed
*	 the secret number) or Lost (guessed too many times)
*
***********************************************************/

#include <iostream>
using namespace std;

int main(){

	const int MAX_GUESSES = 6;
    const int MAX_RANGE = 2*2*2*2*2*2;
    
    cout << MAX_RANGE;
    
    return 0;
}
