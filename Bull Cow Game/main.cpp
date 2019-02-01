//
//  main.cpp
//  Bull Cow Game
//
//  Created by Khallil Bailey on 1/24/19.
//  Copyright © 2019 Khallil Bailey. All rights reserved.
//

#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
std::string PrintGuess(std::string Guess);
void GuessesLeft(int guesses);
bool PlayAgain();

//Start of Application
int main() {
    bool bPlayAgain = false;
    
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = PlayAgain();
    } while (bPlayAgain);
    
    
    
    std::cout << std::endl;
    return 0;
}

void PrintIntro() {
    constexpr int WORD_LENGTH = 5;
    
    //Introduces the game
    std::cout << "Welcome To Bulls and Cows, a fun word game.\n";
    std::cout << "Can You guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n";
    std::cout << std::endl;
}

//FUNCTION TO PLAY GAME
void PlayGame() {
    //Loop for player guess and number gueesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
        std::string Guess = GetGuess();
        PrintGuess(Guess);
        GuessesLeft(NUMBER_OF_TURNS);
    }
}

//PLAYER GUESSES LEFT
void GuessesLeft(int guesses) {
    //Tells player how many guess they have left
    std::cout << "You have " << guesses << " left.";
    std::cout << std::endl;
}

//GETS PLAYER GUESSES
std::string GetGuess() {
    //Get Guess
    std::cout << "Enter Your Guess: ";
    std::string Guess = "";
    getline(std::cin, Guess);
    return Guess;
}

//PRINTS GUESS TO PLAYER
std::string PrintGuess(std::string Guess) {
    //Prints guess
    std::cout << "Your guess was: " << Guess;
    std::cout << std::endl;
    std::cout << std::endl;
    return Guess;
}

//ASKS PLAYER TO PALY AGAIN
bool PlayAgain() {
    std::cout << "Do you want to play again? (y/n)";
    std::string Respone = "";
    getline(std::cin, Respone);
    return (Respone[0] == 'y') || (Respone[0] == 'Y');
}
