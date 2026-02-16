#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double m1, m2,d;
    const double G = 6.673e-8;
    double force;
    bool check = true;
    bool repeat = false;
    char response;

    cout.setf(ios::scientific); // set to scientific notation
    cout.setf(ios::showpoint); // show trailing zeros
    cout.precision(2); // set precision to 2 decimal places

    do{
        do{ // make sure inputs are valid before calculating force
            cout << "Enter the mass of the first object(kg): ";
            cin >> m1;
            cout << "Enter the mass of the second object(kg): ";
            cin >> m2;
            cout << "Enter the distance between the objects: ";
            cin >> d;

            if (d <= 0 || m1 <= 0 || m2 <= 0) {
                cout << "Must be positive values. Please try again." << endl;
            } else {
                check = true;
            }
        } while (!check);

        force = (G * m1 * m2) / pow(d, 2); // calculate the gravitational force using the formula and the pow function

        cout << "The gravitational force between the objects is: " << force << " dynes." << endl;
        cout << "Would you like to calculate another force? (y/n): ";
        cin >> response;
        if (response == 'y' || response == 'Y') { // check is user wants to calculate another force
            repeat = true;
            check = false; // reset check for next round of inputs
        } else {
            repeat = false;
        }
    } while (repeat); // repeat the process if user wants to calculate another force

    return 0;
}

