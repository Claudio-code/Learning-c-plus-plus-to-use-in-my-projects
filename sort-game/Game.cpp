#include "ShowMessages.cpp"

class Game {
    private:
        int secretNumber = 0;
        int kickedNumber = 0;

    public:
        Game() {
            this->secretNumber = rand() % 100;
            this->start();
        }

        void start() {
            Game::presentationMessage();
            this->kickNumber();
            this->validateKick();
        }

        static void presentationMessage() {
            ShowMessages::printMessages("***********************************");
            ShowMessages::printMessages("* Welcome to the guessing game !! *");
            ShowMessages::printMessages("***********************************");
        }

        void kickNumber() {
            ShowMessages::printMessages("kick a number = ");
            cin >> this->kickedNumber;

            ShowMessages::printMessages("the value of your kick is = " + to_string(this->kickedNumber));
        }

        void validateKick() const {
            if (this->kickedNumber == this->secretNumber) {
                ShowMessages::printMessages("Good !! You got it right te secret number is = " + to_string(this->kickedNumber));
                return;
            }

            if (this->kickedNumber > this->secretNumber) {
                ShowMessages::printMessages("Your kicked is bigger than the secret number");
                return;
            }

            ShowMessages::printMessages("Your kicked is smaller than the secret number");
        }
};
