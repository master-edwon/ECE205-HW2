#include <iostream> 
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main () {
    int finalist [25]; // array to hold the 25 finalists
    int winner [4]; // array to hold the 4 winners
    for (int i = 0; i < 25; i++) { // initialize finalist array with numbers 1 to 25
        finalist[i] = i + 1;
    }

    for (int i = 0; i < 4; i++) { // select 4 winners randomly from the finalist array
        int currentPoolSize = 25 - i; // the size of the pool of finalists decreases by 1 after each winner is selected to prevent duplicates
        int randomIndex = rand() % currentPoolSize; 
        winner[i] = finalist[randomIndex];
        // remove the selected winner from the finalist array by shifting all elements after the selected index to the left
        for (int j = randomIndex; j < currentPoolSize - 1; j++) {
            finalist[j] = finalist[j + 1];
        }
    }
        
    // output the winners by iterating through the winners array
    cout << "The winners are: ";
    for (int i = 0; i < 4; i++) {
        cout << winner[i] << " ";
    }
    cout << endl;

    return 0;
}