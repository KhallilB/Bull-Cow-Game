//
//  FBullCowGame.cpp
//  Bull Cow Game
//
//  Created by Khallil Bailey on 1/27/19.
//  Copyright © 2019 Khallil Bailey. All rights reserved.
//

#include "FBullCowGame.hpp"

FBullCowGame::FBullCowGame() {
    Reset();
}

void FBullCowGame::Reset() {
    constexpr int MAX_TRIES = 8;
    
    MyCurrentTry = 1;
    MyMaxTries = MAX_TRIES;
    return;
}

int FBullCowGame::GetMaxTries() const {
    return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const{
    return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const{
    return false;
}

bool FBullCowGame::CheckGuess(std::string) {
    return false;
}

