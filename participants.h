#ifndef PARTICPANTS_H
#define PARTICPANTS_H
#include "ChallongeWrapper.h"
class Participants {
public:
  std::string index(const std::string tournamentID);
  std::string show(const std::string tournamentID, const std::string particpantID);
  void create(const std::string tournamentID, const std::string particpantName, const std::string challonge_username,
              const std::string email, const int seed, const std::string misc);
  void destroy(const std::string tournamentID, const std::string participantID);
  void randomize(const std::string tournamentID);
  void update(const std::string tournamentID, const std::string participantID, const std::string name);
private:
};


#endif