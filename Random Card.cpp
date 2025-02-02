#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

void pickACard();

int main()
{   
    char input;
    cout << "This program allows you to pick a random card. Would you like to pick a card [Y/N]? " << endl;
    cin >> input;

    if (input == 'Y' || input == 'y') {
        pickACard();
    }
    else if (input == 'N' || input == 'n') {
        cout << "Maybe next time!";
    }
    else {
        cout << "Error! Oh well.";
    }
    
    return 0;
}

void pickACard() {
    //Card library
    string suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    string rank[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    
    //Randomizer
    unsigned seed = time(0);
    srand(seed);
    int x = rand() % (0 - 13);
    int y = rand() % (0 - 4);

    //Output
    cout << setfill('*') << setw(40) << "*" << endl;  //ideally, this line and line 45 should contain more stars to match the legth of line 43, but the assignment parameter locks the width to 40.
    cout << setfill(' ') << setw(40) << " " << endl;
    cout << setfill('-') << setw(40) << left << "Casino Card:" << right << rank[x] << " of " << suit[y] << endl;
    cout << setfill(' ') << setw(40) << " " << endl;
    cout << setfill('*') << setw(40) << '*' << endl;
    cout << endl;
    
    //Reset
    char input;
    cout << "Would you like to pull another [Y/N]?";
    cin >> input;

    if (input == 'Y' || input == 'y') {
        pickACard();
    }
    else if (input == 'N' || input == 'n') {
        cout << "Maybe next time!";
    }
    else {
        cout << "Error! Oh well.";
    }
    }
