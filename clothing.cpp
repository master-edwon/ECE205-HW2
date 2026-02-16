#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    double height, weight;
    int age;
    bool valid = false;

    do { // take inputs and validate them before calculating sizes
        cout << "Enter your height in inches: ";
        cin >> height;
        cout << "Enter your weight in pounds: ";
        cin >> weight;
        cout << "Enter your age in years: ";
        cin >> age;

        if (height <= 0 || weight <= 0 || age <= 0) {
            cout << "Height, weight, and age must be positive values. Please try again." << endl;
        } else {
            valid = true;
        }
    } while (!valid);

   double hatSize = (weight / height) * 2.9; // hat size calculation 
   double jacketSize = (height * weight) / 288.0; // hat size calculation
   if (age > 30) { // adjuist jacket size for age over 30, incrementing by 1/8 inch for every 10 years over 30
       jacketSize += ((age - 30) / 10) * (1.0 / 8);
   }
   double waistSize = weight / 5.7; // waist size calculation
   if (age > 28) { // adjust waist size for age over 28, incrementing by 1/10 inch for every 2 years over 28
       waistSize += ((age - 28) / 2) * (1.0 / 10); 
   }

   // print out neatly formatted sizes with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Your hat size is: " << hatSize << endl;
    cout << "Your jacket size is: " << jacketSize << endl;
    cout << "Your waist size is: " << waistSize << endl;

    return 0;
}