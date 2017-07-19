#ifndef MATCHES_H
#define MATCHES_H
#include "ChallongeWrapper.h"
class Match {
public:
    //Returns an index of ALL matches associated with the specified tournament id
    std::string index(const std::string tournamentID);
    //Returns an index of ALL matches associated with the specified tournament id and containing the specified participantID
    std::string index(const std::string tournamentID, const std::string participantID);
    //Returns a match json object of the specified match
    std::string show(const std::string tournamentID, const std::string matchID);
    //Updates the specified match with the passed criteria
    void update(const std::string tournamentID, const std::string matchID, const std::string scores_csv,
                const std::string winner_id);
private:
};



#endif