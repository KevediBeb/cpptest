#include <iostream>
#include <string>
using namespace std;

float blab = 0;
int dice = 0;

int playerDice[] = {0, 0, 0, 0, 0}; 
int puterDice[] = {0, 0, 0, 0, 0}; 

int remainingPlayerDice = 5;
int remainingPuterDice = 5;

bool playerDead = false;
bool puterDead = false;

int playerTotal = 0;
int puterTotal = 0;

int randomNum(int lowerLim, int upperLim){
  int final = lowerLim + (rand() % upperLim);
  return final;
}
// I am going to kill myself

int rollDice(){
  int random;
  cout << "Type [r] to roll dice: " << endl;
  string val;
  do
  {
    cin >> val;
    if(val == "r"){
      random = randomNum(1, 6);
      //cout << "The dice rolled a: " << random << "!" << endl;
    }
  } while (val != "r");
  return random;
}

int main() {
  srand((unsigned) time(NULL));
  // what is this shit bru
  // idk antal sekunder sedan 1970 type shi
  cout << "Hello World!" << "\n";
  cout << "https://en.wikipedia.org/wiki/Drop_Dead_(dice_game)" << endl;
  cout << "You are playing drop dead" << endl;
  //int val;
  //cin >> val;
  //cout << "Now there are " << val << " blabs!" << endl;

  int currentRemain = remainingPlayerDice;
  for(int i = 0; i < currentRemain; i++){
    int current = rollDice();
    playerDice[i] = current;
    cout << current << endl;
  }
  for(int i = 0; i < currentRemain; i++){
    int current = playerDice[i];
    cout << "Dice " << i+1 << ": " <<  current << endl;
    if(current == 2 || current == 5){
      remainingPlayerDice --;
    }else{
      playerTotal += current;
    }
  }
  cout << "Player is now left with: " << remainingPlayerDice << " dice!" << endl;
  cout << "Player total score is now: " << playerTotal << "!" << endl;
  
  
  
  return 0;
}

