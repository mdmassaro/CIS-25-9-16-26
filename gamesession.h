#include <iostream>
using namespace std;

class GameSession{

    private:
        string IPAddress;
        int userID;
        static int activeGameSessions;

    public:

        static int getActiveSessions(){
            return activeGameSessions;
        }

        GameSession(string ipa, int uid):IPAddress(ipa), userID(uid);

        ~GameSession();

};

