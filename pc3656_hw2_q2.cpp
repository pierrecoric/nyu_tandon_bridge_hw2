//pc3656 hw2 q2
//2024-09-14
//Program that takes a value in dollar as input and give the smalles amount of each coin needed to represent it.

#include <iostream>
using namespace std;

int main() {
    //Defining constants for the value of each coin.
    const int VALUE_PENNY(1), VALUE_NICKEL(5), VALUE_DIME(10), VALUE_QUARTER(25), CENTS_IN_DOLLAR(100);
    //Defining variable for the different input and output amounts.
    int amountOfDollars, amountOfCents, amountOfQuarters, amountOfDimes, amountOfNickels, amountOfPennies;
    
    //Prompting the user for inputs in dollar and storing the values in the related variables.
    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
    cin >> amountOfDollars >> amountOfCents;

    //Compute the total amount in cents.
    amountOfPennies = amountOfDollars * CENTS_IN_DOLLAR + amountOfCents;
    
    //Compute the amounts of coins for the different face value. 
    //The amount of pennies that store the total amount of cents at the bengining is updated with each consecutive remainder.
    amountOfQuarters = amountOfPennies / VALUE_QUARTER;
    amountOfPennies = amountOfPennies % VALUE_QUARTER;

    amountOfDimes = amountOfPennies / VALUE_DIME;
    amountOfPennies = amountOfPennies % VALUE_DIME;

    amountOfNickels = amountOfPennies / VALUE_NICKEL;
    amountOfPennies = amountOfPennies % VALUE_NICKEL;

    //Outputing the result.
    cout << amountOfDollars << " dollars and " << amountOfCents << " are:" << endl
         << amountOfQuarters << " quarters, " << amountOfDimes << " dimes, " << amountOfNickels << " nickels and " << amountOfPennies << " pennies" << endl;
    
    //Exiting the program
    return 0;
}