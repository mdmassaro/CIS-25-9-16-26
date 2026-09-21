#include <iostream>
#include "gamesession.h"

using namespace std;

int GameSession::activeGameSessions = 0;

static int GameSession::getActiveSessions(){
    return activeGameSessions;
}

GameSession::GameSession(string ipa, int uid):IPAddress(ipa), userID(uid){
    cout << endl << "Game Session with uderID " << userID << " and IPAddress " << IPAddress << " connected " << endl;
    activeGameSessions += 1;
}

GameSession::~GameSession() {
    cout << endl << "Game ended" << endl;
    activeGameSessions -= 1;
}

int main(){

    cout << endl << "Server started..." << endl;
    cout << endl << "Number of game sessions: " << GameSession::getActiveSessions() << endl;
    GameSession newGameSession("123.456.789.0.123", 12345);
    cout << endl << "Number of game sessions: " << GameSession::getActiveSessions() << endl;
    GameSession anotherGameSession("123.456.789.0.456", 435);
    cout << endl << "Number of game sessions: " << GameSession::getActiveSessions() << endl;
    cout << endl << "Server shutdown..." << endl;


    return 0;
}
