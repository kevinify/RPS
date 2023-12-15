// Classic Rock Paper Scissors game
// Single player
#include <iostream>
#include <cstdlib> 
using namespace std;

int play();

int main() {
    cout << "WELCOME TO ROCK PAPER SCISSORS!" <<endl;
    play();
    return 0;
}

int play() {
    srand(time(0));
    cout << "Type s for scissors, r for rock or p for paper: \n";
    string player;
    cout << "Player: ";
    cin >> player;
    if(player == "r" || player == "p" || player == "s") {
        string rps[3] = {"r", "p", "s"};
        string computer = rps[rand() % 3];
        cout << "Computer: " << computer << endl;
        if (player == computer) {
            cout << "Draw! \nPlay Again...";
            return play();
        }
        if((computer == "r" && player == "p") or (computer == "p" && player == "s") or (computer == "s" && player == "r")) {
            cout << "Congratulations You Won..";
            return 0;
        }
        cout << "Sorry, You Lose. Better luck next time.";
        return 0;
        }
    else {
        cout << "Invalid input. Follow the instruction\n";
        return play();
    }
    return 0;
}