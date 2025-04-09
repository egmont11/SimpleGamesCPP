#include <iostream>

int RockPaperScissors() {
    int playerChoice;

    srand(time(0));
    // rand() % (max-min+1)+min
    int MIN = 1, MAX = 3;
    int randomInt = rand() % (MAX-MIN+1)+MIN;

    std::cout << "Very well, let us play rock, paper, scissors." << std::endl;

    std::cout << "Which do you choose? (1, 2, 3 for rock, paper, scissors respectively) ";
    std::cin >> playerChoice;

    if (playerChoice == randomInt) {
        std::cout << "It is a draw." << std::endl;
    }

    if (playerChoice == 1 && randomInt == 3) std::cout << "You have won." << std::endl;
    else if (playerChoice == 2 && randomInt == 1) std::cout << "You have won." << std::endl;
    else if (playerChoice == 3 && randomInt == 2) std::cout << "You have won." << std::endl;
    else { std::cout << "You have lost." << std::endl; }

    return 0;
}

int TicTacToe() {
    std::cout << "Very well, let us play tic tac toe." << std::endl;
    return 0;
}

int Hangman() {
    std::cout << "Very well, let us play the hangman game." << std::endl;
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
