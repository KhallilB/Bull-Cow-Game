//
//  main.cpp
//  Bull Cow Game
//
//  Created by Khallil Bailey on 1/24/19.
//  Copyright © 2019 Khallil Bailey. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void GuessesLeft(int guesses);
string GetGuessAndPrint();

//Start of Application
int main() {
    
    PrintIntro();
    
    //Loop for player guess and number gueesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
        GetGuessAndPrint();
        GuessesLeft(NUMBER_OF_TURNS);
    }
    
    

    cout << endl;
    return 0;
}

void PrintIntro() {
    
    constexpr int WORD_LENGTH = 5;
    
    //Introduces the game
    ::cout << "Welcome To Bulls and Cows, a fun word game.\n";
    ::cout << "Can You guess the " << WORD_LENGTH;
    ::cout << " letter isogram I'm thinking of?\n";
    ::cout << endl;
}


void GuessesLeft(int guesses) {
    //Tells player how many guess they have left
    ::cout << "You have " << guesses << " left.";
    ::cout << endl;
}

string GetGuessAndPrint() {
    //Get Guess
    ::cout << "Enter Your Guess: ";
    ::string Guess = "";
    getline(cin, Guess);
    
    //Prints guess
    ::cout << "Your guess was: " << Guess;
    ::cout << endl;
    ::cout << endl;
    return Guess;
    
}
