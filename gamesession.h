#include <iostream>
using namespace std;

class GameSession{

    private:
        string IPAddress;
        int userID;
        static int activeGameSessions;

    public:

        static int getActiveSessions();

        GameSession(string ipa, int uid):IPAddress(ipa), userID(uid);

        ~GameSession();

};

