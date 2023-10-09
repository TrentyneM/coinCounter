// C++ Coin Counter
// Written By: Trentyne Morgan

#include <iostream>		// Standard C++ Input/Output Stream
#include <fstream>		// C++ File Input/Output Operations

// Using standard namespace because fstream needs it
using namespace std;

// We declare and define our coin values as doubles
double usaGoldDollarAmount = 1.00;
double usaHalfDollarAmount = 0.50;
double usaQuarterAmount	= 0.25;
double usaDimeAmount = 0.10;
double usaNickelAmount = 0.05;
double usaPennyAmount = 0.01;

// User's Coins and Totals

/* (We can kind of shorten this by declaring and defining all of the integer values on one line
and putting the doubles in another) */
int userGoldDollars, userHalfDollars, userQuarters, userDimes, userNickels, userPennies;
double goldTotal, halfTotal, quarterTotal, dimeTotal, nickelTotal, pennyTotal;

// Creating a new ofstream object for file activity
std::ofstream saveUserBalance;



// ============================================================
/* Function to save the user's balance (takes one parameter) */
// ============================================================
int saveBalance(float balance){

	std::cout << "Opening yourBalance.txt for writing...\n";
	
	// Opening example.txt for writing (ios::out), and truncate contents before opening (ios::trunc)
	saveUserBalance.open("yourBalance.txt", ios::out | ios::trunc );
	
	
	std::cout << "Writing...\n";
	
	// Write balance to the file
	saveUserBalance << balance;
	
	// Return
	return 0;
}

// ================
/* Main Function */
// ================
int main(){
	
	// Title Message
	std::cout << "== Coin Counter 1.0 -- Written By: Trentyne Morgan ==\n\n";
	
	// Ask the user for the amount of gold dollars they have.
	std::cout << "How many gold dollars do you have?: ";
	std::cin >> userGoldDollars;
	
	// Ask the user for the amount of half dollars they have.
	std::cout << "\n" << "How many half dollars do you have?: ";
	std::cin >> userHalfDollars;
	
	// Ask the user for the amount of quarters they have
	std::cout << "\n" << "How many quarters do you have?: ";
	std::cin >> userQuarters;
	
	// Ask the user for the amount of dimes they have
	std::cout << "\n" << "How many dimes do you have?: ";
	std::cin >> userDimes;
	
	// Ask the user for the amount of nickels they have
	std::cout << "\n" << "How many nickels do you have?: ";
	std::cin >> userNickels;
	
	// Ask the user for the amount of pennies they have
	std::cout << "\n" << "How many pennies do you have?: ";
	std::cin >> userPennies;
	
	// Calculate totals by multiplying coin value by how many the user has
	goldTotal = userGoldDollars * usaGoldDollarAmount;
	halfTotal = userHalfDollars * usaHalfDollarAmount;
	quarterTotal = userQuarters * usaQuarterAmount;
	dimeTotal = userDimes * usaDimeAmount;
	nickelTotal = userNickels * usaNickelAmount;
	pennyTotal = userPennies * usaPennyAmount;
	
	// Print Coin Amounts
	std::cout << "\nCoin Amounts: \n\n";
	std::cout << "Gold Dollars: " << userGoldDollars << "\n";
	std::cout << "Half Dollars: " << userHalfDollars << "\n";
	std::cout << "Quarters: " << userQuarters << "\n";
	std::cout << "Nickels: " << userNickels << "\n";
	std::cout << "Dimes: " << userDimes << "\n";
	std::cout << "Pennies: " << userPennies << "\n\n";
	
	// Print Coin Totals
	std::cout << "\nCoin Totals: \n\n";
	std::cout << "Gold Dollar Total: " << goldTotal << "\n";
	std::cout << "Half Dollar Total: " << halfTotal << "\n";
	std::cout << "Quarter Total: " << quarterTotal << "\n";
	std::cout << "Nickels Total: " << nickelTotal << "\n";
	std::cout << "Dime Total: " << nickelTotal << "\n";
	std::cout << "Pennies Total: " << pennyTotal << "\n";
	
	// Calculate Coin Grand Total
	float coinGrandTotal = 0.00;
	coinGrandTotal = goldTotal + halfTotal + quarterTotal + dimeTotal + nickelTotal + pennyTotal;
	std::cout << "\n\n" << "Coin Grand Total: " << coinGrandTotal << "\n\n";
	
	// Tell the user their balance is being saved
	std::cout << "Saving your balance...\n";
	
	// Using saveBalance() to write coinGrandTotal to yourBalance.txt
	saveBalance(coinGrandTotal);
 	
	// Exit Program.
	return 0;
}