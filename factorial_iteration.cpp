// C++ program to find factorial of a number using iteration 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// number n whose factorial needs to be find 
	int n = 5; 
	// initialize fact variable with 1 
	int fact = 1; 

	// loop calculating factorial 
	for (int i = 1; i <= n; i++) { 
		fact = fact * i; 
	} 
	// print the factorial of n 
	cout << "Factorial of " << n << " is " << fact << endl; 

	return 0; 
}
