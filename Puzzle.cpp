#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int number, guess;
  srand(time(NULL));
  number = rand() % 100 + 1;

  cout << "Guess the number between 1 and 100: ";
  cin >> guess;

  while (guess != number) {
    if (guess < number) {
      cout << "Too low. Try again: ";
    } else {
      cout << "Too high. Try again: ";
    }
    cin >> guess;
  }

  cout << "You guessed it!" << endl;

  return 0;
}