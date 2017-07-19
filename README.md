# ChallongePlusPlus
CH++ is a C++ Wrapper for the Challonge API!
# Requirements
 --[Curl for People!](https://github.com/whoshuu/cpr) and it's dependencies

 --[JSON for modern C++](https://github.com/nlohmann/json)
 
 --C++11 compatible compiler
# Usage
```C++
#include "ChallongeWrapper.h"
#include <cpr/cpr/h>
#include <json.hpp>
int main(){
    //Initialize a challonge! object with your APIKEY and credentials!
    Challonge testOjbect("APIKEY","USERNAME");
    //Tournament Functions
    //Retrieves a JSON object of all tournaments associated with your account
    testObject.Tournament.index();
    //Retrieves a JSON object of the single tournament associated with that ID
    testObject.Tournament.show("TOURNAMENT_ID");
    //Creating a tournament
    testObject.Tournament.create("TestTournament", "URL", "single elimination");
    
    
    //All API calls are contained within the Challonge object
    //working with Matches/Participants is done in the same way
    testObject.Match.index("TOURNAMENTID");
    testObject.Particpants.index("TOURNAMENTID");
    return 0;
}
```

# TODO:
 - Store tournamentID inside the Tournament object and have it set on initialization of the challonge ojbect
 - Parse JSON into a Map for easier referencing and calling
    ```C++
    std::map<std::string, std::string> testMap;
    //Easier calling
    testMap = testObject.Tournaments.index();
    object.Match.index(testMap["id"]);
    ```
 - Fix the building/creating/including of this source and fileNames
 
# Compiling
```
    mkdir build
    cd build
    cmake ..
    make
```