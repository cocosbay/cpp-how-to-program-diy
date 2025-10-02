#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int rollDice();
int main() {
	enum class Status{CONTINUE,LOST,WON};
	srand(static_cast<unsigned int>(time(0)));
	Status gameStatus;
	unsigned int sumOfDice{ rollDice() };
	switch (sumOfDice) {
	case 7: case 11: 
		gameStatus = Status::WON; cout << "You win!" << endl; break;
	case 2: case 3: case 12: 
		gameStatus = Status::LOST; cout << "You lose!" << endl; break;
	default: gameStatus = Status::CONTINUE; break;
	}
	cout << "~~~~~~~~~~~~~~~~~~" << endl;
	while (gameStatus == Status::CONTINUE) {
		unsigned int gamePoint{ rollDice() };
		if (gamePoint == sumOfDice) {
			gameStatus = Status::WON;
			cout << "You win!" << endl;
		}
		else {
			if (gamePoint == 7) {
				gameStatus = Status::LOST;
				cout << "You lose!" << endl;
			}
		}
	}
}
unsigned int rollDice() {
	int dice1{ 1 + rand() % 6};
	int dice2{ 1 + rand() % 6};
	int sum{ dice1 + dice2 };
	cout << "Player rolled: " << dice1 << " + "
		<< dice2 << " = " << sum << endl;
	return sum;
}