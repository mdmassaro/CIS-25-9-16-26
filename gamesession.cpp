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
