#include "tournament.h"
std::string Tournament::index(){
  auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments.json"));
  auto json = nlohmann::json::parse(response.text);
  return json.dump(4);
}

void Tournament::create(const std::string name, const std::string url, const std::string tournament_type){
  auto response = cpr::Post(cpr::Url{CHALLONGE_URL + "tournaments.json"},
                            cpr::Payload{{"tournament[name]",name},
                                          {"tournament[url]", url},
                                          {"tournament[tournament_type]", tournament_type}});
  auto json = nlohmann::json::parse(response.text);
}

std::string Tournament::show(const std::string tournamentID){
  auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + ".json"));
  auto json = nlohmann::json::parse(response.text);
  return json.dump(4);
}

void Tournament::destroy(const std::string tournamentID){
  auto response = cpr::Delete(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + ".json"));
  auto json = nlohmann::json::parse(response.text);
  std::cout << json.dump(4);
  //return json.dump(4);
}

void Tournament::reset(const std::string tournamentID){
  auto response = cpr::Post(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/reset.json"));
  std::cout << response.text;
}



