#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    ifstream in; // input file stream to read scores from scores.txt
    ofstream out; // output file stream to write results to results.txt

    in.open("scores.txt");

    double n1,n2,n3,n4,n5; // 5 scores to be read from the file

    // read the 5 scores from the file
    in>> n1;
    in>> n2;
    in>> n3;
    in>> n4;
    in>> n5;

    // calculate the average and standard deviation of the scores
    double average = (n1 + n2 + n3 + n4 + n5) / 5.0;
    double std_dev = sqrt(((n1 - average) * (n1 - average) + (n2 - average) * (n2 - average) + (n3 - average) * (n3 - average) + (n4 - average) * (n4 - average) + (n5 - average) * (n5 - average)) / 5.0);
    
    out.open("results.txt"); // open results.txt to write the average and standard deviation
    out << setprecision(2) << "Average: " << average << endl;
    out << setprecision(2) << "Standard Deviation: " << std_dev << endl;  

    // close the file streams
    in.close();
    out.close();

    return 0;
}