// loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
  int level, guesses, number;
  cout << "Choose difficulty(input number):\n1)easy(1-20, 4 guesses)\n2)medium(1-50, 10 guesses)\n3)hard(1-100, 20 guesses)";
  cin >> level;
  if (level = 1) {
    number = 20;
    guesses = 4;
  } else if (level = 2) {
    number = 50;
    guesses = 10;
  } else if (level = 3) {
    number = 100;
    guesses = 20;
  } else {
    cout<<"Invalid difficulty level\n"
    return -1;
  }
  uniform_int_distribution<int> dist{ 1,number};
  int val=dist( default_random_engine{ random_device{}() } );
  int n;
    vector<int> my_array;
    for(int i=0;i<guesses;++i){
      if (i == 3) {
        cout << "Last guess.\n";
    }
      
      cout << "Guess the number:\n" << endl;
    cin >> n;
    while (n < 1 || n>number) {
      cout << "The number is between 1 and " << number << ". Try again\n";
      cin >> n;

    }
    if (val == n) {
      cout << "Congratulations, you won!\n";
      break;

    } else if(i<guesses-1){
      if (n > val) {
        cout << "The number is lower\n";
      } else {
        cout << "The number is higher\n";
      }
      
      }else{
      cout << "Too bad. Better luck next time.\n";

    }
    }
    cout << "The number was:";
    cout << val <<endl;
  return 0;
}