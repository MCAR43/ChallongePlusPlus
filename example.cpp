#include "ChallongeWrapper.h"
#include "tournament.cpp"
#include <cpr/cpr.h>
#include <json.hpp>

int main(int argc, char** argv) {
    Challonge object("KMg5cR5iHtZACRWBKaJdHZSkx2cckSKdlbiqAAiQ","4rc");
    //std::cout << object.Tournament.index();
    //object.Tournament.create("test", "MIN3RL4N", "single elimination");
    std::cout << object.Tournament.show("3045775");
    return 0;
}
