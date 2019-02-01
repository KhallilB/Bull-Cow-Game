//
//  FBullCowGame.hpp
//  Bull Cow Game
//
//  Created by Khallil Bailey on 1/27/19.
//  Copyright © 2019 Khallil Bailey. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>


class FBullCowGame {
    
public:
    FBullCowGame(); //constructor
    
    void Reset() ; //TODO give a return value.
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    bool CheckGuess(std::string) ;
    
private:
    int MyCurrentTry;
    int MyMaxTries;
    
};

#endif /* FBullCowGame_hpp */

