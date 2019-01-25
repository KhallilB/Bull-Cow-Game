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
string GetGuessAndPrint();

//Start of Application
int main() {
    
    PrintIntro();
    
    //Loop for guesses player gets
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
        GetGuessAndPrint();
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
