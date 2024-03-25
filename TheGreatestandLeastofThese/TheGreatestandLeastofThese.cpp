//Omar Vergara
//03-24-2024
//The Greatest and Least of These


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number;
    int largest;
    int smallest;

    // User Input
    cout << "Enter a number (-99 to quit): ";
    cin >> number;

    // End of series without entering numbers
    if (number == -99) {
        cout << "No valid numbers were entered." << endl;
        return 1; // End the program early
    }

    // largest and smallest
    largest = number;
    smallest = number;

    // Loop to continuously get an input  
    while (number != -99) {
        // Logic to find the largest
        if (number > largest) {
            largest = number;
        }

        // Logic to find the smallest
        if (number < smallest) {
            smallest = number;
        }

        // Get the next number from the user
        cout << "Enter another number (-99 to quit): ";
        cin >> number;
    }

    // Displaying the results (outside the loop)
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}