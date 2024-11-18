//pc3656 hw2 q3
//2024-9-15
//Program that takes as inputs the amount of time two workers worked and sum them up in days, hours and minutes.

#include <iostream>
using namespace std;

int main() {
    //Defining time constant based on 1 minute unit.
    const int MINUTES_IN_HOUR(60), MINUTES_IN_DAY(60 * 24);
    //Declaring some varialbes to store the user inputs:
    int daysJohn, hoursJohn, minutesJohn, daysBill, hoursBill, minutesBill, totalDays, totalHours, totalMinutes;
    
    //Prompting the user for inputs and storing them in the related variables.
    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohn;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursJohn;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesJohn;
    cout << endl;
    cout << "Please enter the number of days Bill has worked: ";
    cin >> daysBill;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursBill;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesBill;

    //Compute the total amount of time in minute that they both worked
    totalMinutes = (daysBill + daysJohn) * MINUTES_IN_DAY;
    totalMinutes += (hoursBill + hoursJohn) * MINUTES_IN_HOUR;
    totalMinutes += minutesBill + minutesJohn;

    //Compute the different amounts of the different time units based on the total minutes that they both worked.
    totalDays = totalMinutes / MINUTES_IN_DAY;
    totalMinutes = totalMinutes % MINUTES_IN_DAY;

    totalHours = totalMinutes / MINUTES_IN_HOUR;
    totalMinutes = totalMinutes % MINUTES_IN_HOUR;

    //Output the results.
    cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours and " << totalMinutes << " minutes." << endl;
    
    //Exit the program.
    return 0;
}