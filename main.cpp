#include<iostream>
#include "knapsack.h";
using namespace std;


// Driver Code
int main() {

	// Variable Initialization
	int w = 0;
	int choice = 0;
	int value[] = { 60, 100, 120 };
	int weight[] = { 10, 20, 30 };

	// length of array valye
	int n = sizeof(value) / sizeof(value[0]);
	cout << "\n\n------------------------------------------\n";
	cout << "     Welcome to the Knapsack Problem      \n";
	cout << "------------------------------------------\n\n";

	// Prompt 
	do {
		cout << "Choose one of the follwoing options-- \n\n";
		cout << " 1. Perform knapsack Algorithm (Press 1) \n";
		cout << " 2. Exit  from the system(Press 2) \n";
		cout << "Enter your Choice: ";
		cin >> choice;
		if (choice == 1) {
			cout << "\nEnter the value of w (capacity of knapsack):  ";
			cin >> w;
			knapsack k(w);
			cout << "Result = " << k.getResult(n, weight, value) << "\n\n";
		}
		
	} while (choice!=2);

	cout << "\n\n Exit \n\n";
	return 0;
}

