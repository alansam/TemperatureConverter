/*
Write a program that first asks the user which Temperature scale conversion he/she would like to perform:
1. Convert F to C
2. Convert C to F
3. Quit

What is your choice?

Then it asks the user for input for three real number variables: start_temp, end_temp, temp_incr.
It will then produce a two column Fahrenheit to Celsius table or a two column Celsius to Fahrenheit table,
depending on the choice.

For choice 1, the first column should be labeled Fahrenheit and the first value the Fahrenheit column is start_temp.
The second column should be labeled Celsius, and its value is calculated from the values in the Fahrenheit column
using the formula C = (5.0/9.0)*(F – 32.0).

For choice 2, the table will show the Celsius column first, Fahrenheit column second, and use the formula
F = 9.0/5.0 * C + 32.0

Here is my code:
*/
#include <iostream>
#include <iomanip>
#include <string>

//  using namespace std;  /* TODO: Don't use this! */

const int CWIDTH = 26;

int main() {
  int choice;
  double convertFoC, converCtoF;
  double starting, endvalue, incrementvalue;
  const int CWIDTH = 13;

  std::string menu = "Menu:\n"
                     "1. Convert F to C\n"
                     "2. Convert C to F\n"
                     "3. Quit\n";

  choice = 0;
  while (choice != 3) {
    std::cout << menu << std::endl;
    std::cin >> choice;

    if (choice < 3) {
      std::cout << "  Starting temp: ";
      std::cout.flush();
      std::cin >> starting;
      std::cout << "  Ending temp: ";
      std::cout.flush();
      std::cin >> endvalue;
      std::cout << "  Increment: ";
      std::cout.flush();
      std::cin >> incrementvalue;
    }
  
    switch (choice) {
    case 1:
      std::cout << "Fahrenheit" << std::setw(17)
                << "Celsius" << std::endl;
      for (double calcCelsius = starting; calcCelsius <= endvalue;  calcCelsius += incrementvalue)
      {
        convertFoC = (5.0 / 9.0) * (calcCelsius - 32.0);
        std::cout << std::showpoint
                  << std::fixed
                  << std::setprecision(2)
                  << calcCelsius
                  << std::setprecision(2)
                  << std::setw(21)
                  << convertFoC
                  << std::right;
        std::cout << std::endl;
      }
      break;
  
    case 2:
      std::cout << "Celsius"
                << std::setw(CWIDTH)
                << "Fahrenheit\n";
      for (double calcFahrenheit = starting; calcFahrenheit <= endvalue;  calcFahrenheit += incrementvalue)
      {
        converCtoF = ((9.0 / 5.0) * calcFahrenheit) + 32.0;
        std::cout << std::setw(CWIDTH)
                  << std::showpoint
                  << std::fixed
                  << std::setprecision(1)
                  << calcFahrenheit
                  << std::fixed
                  << std::setprecision(1)
                  << std::setw(CWIDTH)
                  << converCtoF
                  << std::right;
        std::cout << std::endl;
      }

    case 3:
      std::cout << "Ending." << std::endl;
      break;

    default:
      break;
    }
  }

// THE problem that i have its that i can't get the test results 📷 I post then in every screenshot.
}
