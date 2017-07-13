#include "tournament.h"
std::string Tournament::index(){
  auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments.json"));
  auto json = nlohmann::json::parse(response.text);
  return json.dump(4);
}

void Tournament::create(const std::string name, const std::string url, const std::string tournament_type){
  auto response = cpr::Post(cpr::Url{CHALLONGE_URL + "tournaments.json"},
                            cpr::Payload{{"name", name},
                                         {"url",url},
                                         {"tournament_type", tournament_type}});
  auto json = nlohmann::json::parse(response.text);
  std::cout << json.dump(4);

}

std::string Tournament::show(const std::string tournamentID){
  auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + ".json"));
  auto json = nlohmann::json::parse(response.text);
  return json.dump(4);
}

