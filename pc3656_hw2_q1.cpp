//pc3656 hw2 q1
//2024-09-13
//Program that takes as user input the amounts of the different dollar coins and outputs the amount in dollars and cents

#include <iostream>
using namespace std;

int main() {
    //Defining constants for the value of each coin.
    const double VALUE_PENNY(0.01), VALUE_NICKEL(0.05), VALUE_DIME(0.1), VALUE_QUARTER(0.25);
    const int DOLLAR(1), CENTS_IN_DOLLAR(100);
    //Defining variables for the amount of each type of coin.
    int amountOfPennies, amountOfNickels, amountOfDimes, amountOfQuarters;
    //Defining and initializing a variable for the total amount of money.
    double total(0), amountOfCents;
    int amountOfDollars;

    //Prompting the user for amount of coins and storing the values in the related variables.
    cout << "# of quarter:";
    cin >> amountOfQuarters;
    cout << "# of dimes: ";
    cin >> amountOfDimes;
    cout << "# of nickels: ";
    cin >> amountOfNickels;
    cout << "# of pennies: ";
    cin >> amountOfPennies;

    //Computing the total amount of money.
    total = amountOfQuarters * VALUE_QUARTER 
        + amountOfDimes * VALUE_DIME 
        + amountOfNickels * VALUE_NICKEL
        + amountOfPennies * VALUE_PENNY;
    
    //Computing the amount of dollars and the remaining cents.
    amountOfDollars = total / DOLLAR;
    amountOfCents = (total - amountOfDollars) * CENTS_IN_DOLLAR;

    //Outputing the result.
    cout << "The total amount is " << amountOfDollars << " dollars and " << amountOfCents << " cents" << endl;

    //Exiting the program.
    return 0;
}