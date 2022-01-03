#include "ShowMessages.cpp"

class Game {
    public:
        Game() {
            Game::presentationMessage();
        }

        static void presentationMessage() {
            ShowMessages::printMessages("***********************************");
            ShowMessages::printMessages("* Welcome to the guessing game !! *");
            ShowMessages::printMessages("***********************************");
        }
};
