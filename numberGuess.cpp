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
	const int MAX_GUESSES = 2;
    const int MAX_RANGE = 2*2*2*2*2*2;
    
    const int LINE_WIDTH = 80;
    
    //DATA VARIABLES
    int secretNumber;
    int usersGuess;
    int guessCount=0;
    bool guessCorrect=false;
    
    int rangeRemaining;
    int rangeBegining = 1;
    int rangeEnd = MAX_RANGE;
    
    string playAgain;

    
    ///INTRO GAME RULES
    cout << "Welcome to the Game ";
    
    do{
        ///GET SECRET NUMBER
        cout << "GIVE ME A NUMBER";
        cout << "Between " << rangeBegining << " and " << rangeEnd << endl;
        cin >> secretNumber;
        //CHECK THAT IS INSIDE RANGE
        //HIDE FROM OTHER USER
        
        do{
            
            cout << "PLAYER TWO, WHATS THE NUMBER?";
            cout << endl << "Between " << rangeBegining << " and "
                 << rangeEnd << endl;
            ///GUESS SECRET NUMBER
            cin >> usersGuess;
            //CHECK THAT IT IS INSIDE RANGE
            
            
            //CHECK GUESS
            if(usersGuess==secretNumber){
                guessCorrect=true;  //correct Guess
            }else{
                guessCount++;
                
                //OUTPUT GUESS HINTS
                if(guessCount<MAX_GUESSES){
                    if (usersGuess>secretNumber) {
                        //cout
                    }
                }
                
            }

        }while (!guessCorrect && guessCount<MAX_GUESSES);
        
        
        //CHECK FOR WIN/LOSE
        if(guessCorrect){
            cout << "Congatulations, You Correctly Guessed the Secret Number,  YOU WIN!!";
        }else{
            cout << "Oh no,  you have run out of guesses without correctly guessing the secret number, YOU LOOSE!";
            //cout << endl << "Do you want to know the secret number"
        }
        
        //CHECK FOR PLAY AGAIN
        cout << endl << "Play Again? (y/n):";
        cin >> playAgain;
       
        
    }while(playAgain.compare("n")!=0);
        
    return 0;
}

