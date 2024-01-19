#include "Solution2.h"
#include <fstream>
#include <sstream>
#include <string>

#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{

    std::ifstream file("BankAccount/" + accountName + ".txt");
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    double total = 0.0;
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string order;
        double amount;
        if (!(iss >> order >> amount)) {
            throw std::runtime_error("Invalid line format");
        }
        total += amount;
    }

    return total;
}

#endif
