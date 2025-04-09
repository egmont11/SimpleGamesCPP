#include <iostream>

int RockPaperScissors() {
    return 0;
}

int TicTacToe() {
    return 0;
}

int Hangman() {
    return 0;
}

int main() {
std::string answer;

    std::cout << "What game shall we play? (1, 2, 3 for RPS, TTT, or hangman respectively)";
    std::cin >> answer;

    if (answer == "1") {
        RockPaperScissors();
    }
    else if (answer == "2") {
        TicTacToe();
    }
    else if (answer == "3") {
        Hangman();
    }

    return 0;
}
