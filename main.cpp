#include <iostream>
#include <string>
using namespace std;

float blab = 0;
int dice = 0;

int turn = 0;
int numberOfPlayers;

string playerNames[] = {"", "", "", "", "", "", "", "" ,"", ""};

int playerDice[] = {0, 0, 0, 0, 0}; 
int puterDice[] = {0, 0, 0, 0, 0}; 

int remainingPlayerDice[] = {5, 5, 5, 5 ,5 ,5 ,5 ,5, 5, 5};
int remainingPuterDice = 5;

bool playerDead = false;
bool puterDead = false;

int playerTotal[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int puterTotal = 0;

bool gameEnded;

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

  cout << "How many players???? MAX: 10!!!" << endl;
  
  cin >> numberOfPlayers;
  cout << "There are: " << numberOfPlayers << " players!" << endl;
  cout << "Type player names" << endl;
  for(int i = 0; i < numberOfPlayers; i++){
    string name;
    cin >> name;
    playerNames[i] = name;

  }
  for(int i = 0; i < numberOfPlayers; i++){
    cout << "Player " << i+1 << ": " << playerNames[i] << endl;

  }


  //int val;
  //cin >> val;
  //cout << "Now there are " << val << " blabs!" << endl;

  while(!gameEnded)
  {
    cout << "Turn: " << turn+1 << endl;
    cout << "Rolling for " << playerNames[turn] << endl;
    while(remainingPlayerDice[turn] > 0){
      int currentRemain = remainingPlayerDice[turn];
  
      for(int i = 0; i < currentRemain; i++){
        int current = rollDice();
        playerDice[i] = current;
        cout << "Rolled " << current << endl;
      }
      for(int i = 0; i < currentRemain; i++){
        int current = playerDice[i];
        cout << "Dice " << i+1 << ": " <<  current << endl;
        if(current == 2 || current == 5){
          remainingPlayerDice[turn] --;
        }else{
          playerTotal[turn] += current;
        }
      }
      
      cout << playerNames[turn] << " is now left with: " << remainingPlayerDice[turn] << " dice!" << endl;
      cout << playerNames[turn] << " total score is now: " << playerTotal[turn] << "!" << endl;
  
    }

    remainingPlayerDice[turn] = 5;

    cout << playerNames[turn] << " dropped dead!" << endl;

    turn++;

    if(turn >= numberOfPlayers){
      gameEnded = true;
    }

    

    
  }
  cout << "Game Ended" << endl;
  for(int i = 0; i < numberOfPlayers; i++){
    cout << playerNames[i] << "'s final score: " << playerTotal[i] << endl;
  }

 
 
  
  
  return 0;
}

