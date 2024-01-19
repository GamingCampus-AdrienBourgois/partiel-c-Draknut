#include "Solution2.h"
#include <fstream>
#include <iostream>
#include <string>

#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	std::ifstream file(accountName + ".txt");
	if (!file) {
		throw std::logic_error("Account not found !");
	}

	std::string operation;
	double amount;
	double balance;

	while (file >> operation >> amount)
	{
		if (operation == "WITHDRAW") {
			balance -= amount; 
		}
		else if (operation == "DEPOSIT") {
			balance += amount;
		}
		else {
			std::cerr << "Unknown operation: " << operation << std::endl;
		}
	}
	
	return balance;
}

#endif
