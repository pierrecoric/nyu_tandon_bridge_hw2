//pc3656 hw2 q4
//2024-09-15

#include <iostream>
using namespace std;

int main() {
    //Declaring variables.
    int x, y;

    //Prompting the user for inputs and store them into the related variables.
    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> x >> y;

    //The results are computed and outputed together.
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " / " << y << " = " << float(x) / float(y) << endl;
    cout << x << " div " << y << " = " << x / y << endl;
    cout << x << " mod " << y << " = " << x % y << endl;

    //Exit the program.
    return 0;
}