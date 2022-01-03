#include "ShowMessages.cpp"

class Game {
    private:
        int kicks = 1;
        int secretNumber = 0;
        int kickedNumber = 0;
        bool win = false;

    public:
        Game() {
            this->secretNumber = rand() % 100;
            this->start();
        }

        void start() {
            Game::presentationMessage();
            while (!win) {
                this->printNumberOfKicks();
                this->kickNumber();
                this->validateKick();
            }
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
            this->addNewKick();
        }

        void validateKick() {
            if (this->kickedNumber == this->secretNumber) {
                this->win = true;
                ShowMessages::printMessages("Good !! You got it right te secret number is = " + to_string(this->kickedNumber));
                this->printNumberOfKicks();
                return;
            }

            if (this->kickedNumber > this->secretNumber) {
                ShowMessages::printMessages("Your kicked is bigger than the secret number");
                return;
            }

            ShowMessages::printMessages("Your kicked is smaller than the secret number");
        }

        void addNewKick() {
            this->kicks++;
        }

        void printNumberOfKicks() {
            ShowMessages::printMessages("Kicks = " + to_string(this->kicks));
        }
};
