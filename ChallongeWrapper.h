#ifndef CHALLONGEWRAPPER_H
#define CHALLONGEWRAPPER_H
#include <iostream>
#include <string>
#include "tournament.h"
#include "participants.h"
#include "match.h"
#include <cpr/cpr.h>
#include <json.hpp>
std::string API_KEY = "";
std::string USERNAME = "";
std::string CHALLONGE_URL = "";
class Challonge {
public:
  Challonge(const std::string api_key, const std::string username) {API_KEY = api_key; USERNAME = username;
                                                                    CHALLONGE_URL = "https://" + USERNAME + ":" + API_KEY  + "@api.challonge.com/v1/";}
  std::string parseJSON(const std::string toParse);
  Tournament Tournament;
  Match Match;
  Participants Participants;
};

#endif /*CHALLONGEWRAPPER_H*/