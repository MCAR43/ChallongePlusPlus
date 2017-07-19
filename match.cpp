#include "match.h"
std::string Match::index(const std::string tournamentID){
    auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/matches.json"));
    auto json = nlohmann::json::parse(response.text);
    return json.dump(4);
}

std::string Match::index(const std::string tournamentID, const std::string participantID){
    auto params = cpr::Parameters{{"participant_id", participantID}};
    auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/matches.json"), params);
    auto json = nlohmann::json::parse(response.text);
    return json.dump(4);
}

std::string Match::show(const std::string tournamentID, const std::string matchID){
    auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/matches/" + matchID + ".json"));
    auto json = nlohmann::json::parse(response.text);
    return json.dump(4);
}

void Match::update(const std::string tournamentID, const std::string matchID, const std::string scores_csv, const std::string winner_id){
    auto request = cpr::Post(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/matches/" + matchID + ".json"),
                             cpr::Payload{{"match[scores_csv]",scores_csv},
                                           {"match[winner_id]", winner_id}};
    
}
