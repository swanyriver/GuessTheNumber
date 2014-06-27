/***********************************************************
* Author: Brandon Swanson
* Date Created: 06-24-2014
* Last Modification Date: 06-27-2014
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
#include <string>
using namespace std;

int main(){

    //CONSTANT CONTROL VARIABLES
	const int MAX_GUESSES = 5;
    const int MAX_RANGE = 100;
    const int EQUAL_STRING = 0; //as defined by string.compare()
    
    
    
    //DATA VARIABLES
    int secretNumber;
    int usersGuess;
    int guessCount=0;
    bool guessCorrect=false;
    int rangeRemaining;
    int rangeBegining = 1;
    int rangeEnd = MAX_RANGE;
    string playAgain;
    string knowTheNumber;
    
    
    //FOR CLEARING THE SCREEN
    string clearScreen = "";
    for (int i=0; i<50; i++) {
        clearScreen=clearScreen + "\n";
    }

    
    ///INTRO GAME RULES
    cout << "Welcome to the Number Guess Game "
         << endl << "Player 1 will pick a Secret Number"
         << endl << "Then Player 2 will have Five Guesses to deterimine the Secret Number"
         << endl << "I will give you some helpfull hints,  Good Luck";
    
    
    do{ //PLAY GAME
        
        //re-initialize variables after previous round
        guessCount = 0;
        rangeBegining = 1;
        rangeEnd = MAX_RANGE;
        guessCorrect=false;
        
        ///GET SECRET NUMBER
        cout << endl << "Player 1 please enter a number";
        cout << " from " << rangeBegining << " to " << rangeEnd << endl;
        cin >> secretNumber;
        
        while (secretNumber<rangeBegining||secretNumber>rangeEnd) {
            cout << "please keep it between " << rangeBegining << " and " << rangeEnd;
            cout << "\n\nPlayer 1 please enter a number";
            cout << " from " << rangeBegining << " to " << rangeEnd << endl;
            cin >> secretNumber;
        }
        
        //HIDE FROM OTHER USER
        cout << clearScreen << endl;
        
        
        do{ //PLAYER TWO GUESSES
            
            cout << endl << endl << "The number is greater than " << rangeBegining-1
                 << " and less than " << rangeEnd+1;
            cout << endl <<"Player 2 what do you think the number is?";
            
            ///GUESS SECRET NUMBER
            cin >> usersGuess;
            
            //CHECK THAT IT IS INSIDE RANGE
            while (usersGuess<rangeBegining||usersGuess>rangeEnd) {
                cout << "please keep it between " << rangeBegining << " and " << rangeEnd;
                cout << endl <<"Player 2 what do you think the number is?";
                cin >> usersGuess;
            }
            
            
            //CHECK GUESS
            if(usersGuess==secretNumber){
                guessCorrect=true;  //correct Guess
            }else{
                guessCount++;
                
                //OUTPUT GUESS HINTS
                if(guessCount<MAX_GUESSES){
                    if (usersGuess>secretNumber) {
                        cout << "That Guesss was Too High";
                        rangeEnd = usersGuess - 1;
                    } else if ( usersGuess<secretNumber) {
                        cout << "That Guess was Too Low";
                        rangeBegining = usersGuess + 1;
                    }
                }
                
            }

        }while (!guessCorrect && guessCount<MAX_GUESSES);
        
        
        //CHECK FOR WIN/LOSE
        if(guessCorrect){
            cout << "Congatulations, You Correctly Guessed the Secret Number,  YOU WIN!!";
        }else{
            cout << "Oh no,  you have run out of guesses "
                 << "without correctly guessing the secret number"
                 << endl << "YOU LOOSE!";
            
            cout << endl << endl << "Do you want to know the secret number? (y/n):";
            cin >> knowTheNumber;
            
            //CHECK RESPONSE IS y OR n
            while ( !(knowTheNumber.compare("y")==EQUAL_STRING
                   || knowTheNumber.compare("n")==EQUAL_STRING) ) {
                cout << endl << "I'm sorry,  I didnt understand that, enter \"y\" for yes "
                << "and \"n\" for no";
                cout << endl << "Do you want to know the secret number? (y/n):";
                cin >> knowTheNumber;
            }
            
            if (knowTheNumber.compare("y")==EQUAL_STRING) {
                cout << "The Secret Number was " << secretNumber;
            }

        }
        
        //CHECK FOR PLAY AGAIN
        cout << endl << "Play Again? (y/n):";
        cin >> playAgain;
        
        //CHECK RESPONSE IS y OR n
        while ( !(playAgain.compare("y")==EQUAL_STRING
               || playAgain.compare("n")==EQUAL_STRING) ) {
            cout << endl << "I'm sorry,  I didnt understand that, enter \"y\" for yes "
                 << "and \"n\" for no";
            cout << endl << "Play Again? (y/n):";
            cin >> playAgain;
        }
        
        cout << clearScreen << endl;
        
    }while(playAgain.compare("y")==EQUAL_STRING);
    
    cout << "Thank You For Playing!!!" << endl;
        
    return 0;
}

