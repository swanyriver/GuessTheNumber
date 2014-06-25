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

    //CONSTANT CONTROL VARIABLES
	const int MAX_GUESSES = 6;
    const int MAX_RANGE = 2*2*2*2*2*2;
    
    //DATA VARIABLES
    int secretNumber;
    int usersGuess;
    int guessCount=0;
    bool guessCorrect=false;
    
    int rangeRemaining;
    int rangeBegining = 1;
    int rangeEnd = MAX_RANGE;
    
    ///INTRO GAME RULES
    cout << "Welcome to the Game ";
    ///GET SECRET NUMBER
    cout << "GIVE ME A NUMBER";
    cout << "Between " << rangeBegining << " and " << rangeEnd << endl;
    cin >> secretNumber;
    
    do{
        
        cout << "PLAYER TWO, WHATS THE NUMBER?";
        cout << endl << "Between " << rangeBegining << " and "
             << rangeEnd << endl;
        ///GUESS SECRET NUMBER
        cin >> usersGuess;
        
        if(usersGuess==secretNumber){
            guessCorrect=true;
        }else{
            guessCount++;
            cout << guessCount;
        }

    }while (!guessCorrect && guessCount<MAX_GUESSES);
    
    cout << "GAME OVER";
        
    return 0;
}
