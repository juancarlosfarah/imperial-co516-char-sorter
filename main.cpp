#include <iostream>
#include "sort.h"

using namespace std;

// Function Prototypes
void PrintInstructions();
void GetInput(char* input);

// Constants
const short MAX_STR_LEN = 512;

int main() {

    PrintInstructions();

    char input[MAX_STR_LEN];
    while (true) {
        GetInput(input);
        int l = strlen(input);
        if (l == 0) break;
        int endIndex = l - 1;
        SortString(input, 0, endIndex);
        cout << input << endl;
    }

    return 0;
}

void PrintInstructions() {
    cout << endl;
    cout << "This program takes a string and sorts "
         << "its characters in ASCIIbetical order." << endl;
}

void GetInput(char* s) {
    cout << endl;
    cout << "Input a string to sort:" << endl;
    cin.getline(s, MAX_STR_LEN);
}
