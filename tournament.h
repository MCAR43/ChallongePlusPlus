#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "ChallongeWrapper.h"
class Tournament{
public:
  std::string index();
  void create(const std::string name, const std::string url, const std::string tournament_type);
  std::string show(std::string tournamentID);
  void destroy(const std::string tournamentID);
  void start(const std::string tournamentID);
  void reset(const std::string tournamentID);
private:

};

#endif