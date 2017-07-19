#include "ChallongeWrapper.h"
#include "tournament.cpp"
#include "participants.cpp"
#include <cpr/cpr.h>
#include <json.hpp>

int main(int argc, char** argv) {
    //Initializing a challonge object with your API Key and Username respectively
    Challonge object("KMg5cR5iHtZACRWBKaJdHZSkx2cckSKdlbiqAAiQ","4rc");
   // object.Tournament.create("MyTestTourney", "MTEST123", "single elimination");
    std::cout << object.Tournament.show("MTEST123");
    object.Participants.create("MTEST123", "TestPerson1", "user", "email", 1, "description");
    
    
    return 0;
}
