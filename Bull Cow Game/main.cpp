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

int main() {
    
    constexpr int WORD_LENGTH = 5;
    
    //Introduces the game
    ::cout << "Welcome To Bulls and Cows a fun word game.\n";
    ::cout << "Can You guess the " << WORD_LENGTH;
    ::cout << " letter isogram I'm thinking of?\n";
    ::cout << endl;
    
    //Get Guess
    ::cout << "Enter Your Guess: ";
    ::string Guess = "";
    getline(cin, Guess);
    
    //Rpeat back to them
    cout << "Your guess was: " << Guess;
    
    
    cout << endl;
    return 0;
}
