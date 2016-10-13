// loops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){
  uniform_int_distribution<int> dist{ 1,20};
  int val=dist( default_random_engine{ random_device{}() } );
  int n;
    vector<int> my_array;
    
    for(int i=0;i<4;++i){
      if (i == 3) {
        cout << "Last guess.\n";
    }
      
      cout << "Guess the number:\n" << endl;
    cin >> n;
    while (n < 1 || n>20) {
      cout << "The number is between 1 and 20. Try again\n";
      cin >> n;

    }
    if (val == n) {
      cout << "Congratulations, you won!\n";
      break;

    } else if(i<3){
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