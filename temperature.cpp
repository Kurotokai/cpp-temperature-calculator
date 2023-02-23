#include <iostream>

using std::cout;
using std::cin;

int main() {
   // Temperature conversion program 

   int original; // Original Temperature (Choice)
   int converted; // Converted Tempearture (Choice)
   int formula; // Integer leading to the formula needed
   double initial; // Initial temperature
   double result; // Result of the conversion
   std::string result2; // Converted temperature type

   cout << "Welcome to CPP Temperature Converter! \n\n";
   
   cout << "What temperature would you like to convert today?\n";
   cout << "1. Celsius  2. Fahrenheit  3. Kelvin \n";
   cin >> original;

   cout << "What temperature would you like to convert to? \n";
   cout << "1. Celsius  2. Fahrenheit  3. Kelvin \n";
   cin >> converted;

    // Checking if the values inserted are valid conversions
    if (original > 3  || original <= 0 || converted > 3 || converted <= 0) {

        // Redundancy: Values lower than 0 or higher than 3
        cout << "You have entered an invalid value!";
        return 0;    

    } else if (original == converted) {

        // Redundancy: Same temperature type
        cout << "You are converting a temperature into itself!";
        return 0;

    } else {

    // Allowing the user to input their temperature after making sure that the conversion is actual
    cout << "What is the temperature would you like to convert? \n";
    cin >> initial;        

    }

    // If else checking for the formula type, including redundancies
    if (original == 1 && converted == 2) {

        formula = 1; // Celsius to Fahrenheit

    } else if (original == 1 && converted == 3) {

        formula = 2; // Celsius to Kelvin

    } else if (original == 2 && converted == 1) {

        formula = 3; // Fahrenheit to Celsius

    } else if (original == 2 && converted == 3) {

        formula = 4; // Fahrenheit to Kelvin

    } else if (original == 3 && converted == 1) {

        formula = 5; // Kelvin to Celsius

    } else if (original == 3 && converted == 2) {

        formula = 6; // Kelvin to Celsius

    } else {

        // Unlikely that it would reach here, but backup redundancies are always good
        cout << "Your choices are invalid!";

    }

    // Checking the type of temperature the result is
    if (converted == 1) {

        result2 = "Celsius";

    } else if (converted == 2) {

        result2 = "Fahrenheit";

    } else {

        result2 = "Kelvin";

    } 

    // Converting the temperature based on the formula selected
    switch(formula) {
        case 1:
            // Celsius to Fahrenheit
            result = (initial * 1.8) + 32;
            break;
        case 2:
            // Celsuis to Kelvin
            result = initial + 273.15;
            break;
        case 3:
            // Fahrenheit to Celsius
            result = (initial - 32) / 1.8;
            break;
        case 4:
            // Fahrenheit to Kelvin
            result = (initial + 459.67) * 0.555556;
            break;
        case 5:
            // Kelvin to Celsius
            result = initial - 273.15;
            break;
        case 6:
            // Kelvin to Fahrenheit
            result = (initial / 0.555556) - 459.67;
            break;
    }

    cout << "Your result is " << result << " " << result2 << "!"; // Outputting the results
}

