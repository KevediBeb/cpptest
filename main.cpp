#include <iostream>
#include <string>
using namespace std;

float blab = 0;
int dice = 0;

int randomNum(int lowerLim, int upperLim){
  int final = lowerLim + (rand() % upperLim);
  return final;
}

// I am going to kill myself

int main() {
  srand((unsigned) time(NULL));
  // what is this shit bru
  // idk antal sekunder sedan 1970 type shi
  cout << "Hello World!" << "\n";
  cout << "Hello World!" << endl;
  cout << "There are " << blab << " blabs" << endl;
  cout << "Now type new amount of blabs: " << endl;
  //int val;
  //cin >> val;
  //cout << "Now there are " << val << " blabs!" << endl;
  cout << "Generating random number example dice: " << endl;
  int random = randomNum(1, 6);
  cout << "The dice rolled a: " << random << "!" << endl;
  return 0;
}

