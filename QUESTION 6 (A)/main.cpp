#include <iostream>
using namespace std;

// Function to calculate weight from mass
float calculateWeight(float mass) {
    return mass * 9.8; // Weight = Mass * 9.8
}

int main() {
    float mass;

    // Prompt the user for mass input
    cout << "Enter the mass of the object (in kg): ";
    cin >> mass;

    // Call the function to calculate weight
    float weight = calculateWeight(mass);

    // Output the weight
    cout << "The weight of the object is: " << weight << " N" << endl;

    return 0;
}
