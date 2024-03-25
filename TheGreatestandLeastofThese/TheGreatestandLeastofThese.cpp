//Omar Vergara
//03-24-2024
//The Greatest and Least of These



#include <iostream>
#include <limits> 

using namespace std;

int main() {
    // Variables
    int number;
    int largest = numeric_limits<int>::min(); // Sets 'largest' to the smallest possible integer
    int smallest = numeric_limits<int>::max(); // Sets 'smallest' to the biggest possible integer


    // Prompt user for input
    cout << "Enter a number (-99 to quit): ";
    // Starts Loop for input
    while (cin >> number) {
        if (number == -99) {
            break;
        }
        // Find/updates the biggest number
        if (number > largest) {
            largest = number;
        }

        // Find/updates the smallest number
        if (number < smallest) {
            smallest = number;
        }

        // Prompt for next Input 
        cout << "Enter another number (-99 to quit): " ;
    }

    // Non-intenger input validation 
    if (cin.fail()) {
        cin.clear();        // Clears the error that happened
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the wrong stuff

        // Display error message & Ends program 
        cout << "\nInvalid input. Please enter only integers." << endl;
        return 1;
    }

    // Results 
    cout << "\nThe largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
