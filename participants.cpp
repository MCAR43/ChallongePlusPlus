#include "participants.h"
std::string Participants::index(const std::string tournamentID){
    auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/participants.json"));
    auto json = nlohmann::json::parse(response.text);
    return json.dump(4);
}

std::string Participants::show(const std::string tournamentID, const std::string participantID){
    auto response = cpr::Get(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/participants/" + participantID + ".json"));
    auto json = nlohmann::json::parse(response.text);
    return json.dump(4);
}

void Participants::create(const std::string tournamentID, const std::string participantName, const std::string challonge_username = "",
                          const std::string email = "", const int seed = 1, const std::string misc = ""){
    auto request = cpr::Post(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/participants.json"),
                                      cpr::Payload{{"participant[name]", participantName},
                                                   {"participant[challonge_username]",challonge_username},
                                                   {"participant[email]", email},
                                                   {"participant[seed]", seed},
                                                   {"participant[misc]", misc}});
    
}

void Participants::destroy(const std::string tournamentID, const std::string participantID){
    auto request = cpr::Delete(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/participants/" +
                                        participantID + ".json"));  
}

void Participants::randomize(const std::string tournamentID){
    auto request = cpr::Post(cpr::Url(CHALLONGE_URL + "tournaments/" + tournamentID + "/participants/randomize.json"));
    
}