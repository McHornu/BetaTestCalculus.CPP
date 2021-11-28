#include	<iostream>

#define 	gap		cout << "\n"

using namespace std;

int main(){
	
	double number_1;											// Declaring String Variable "number_1"
	double number_2;											// Declaring String Variable "number_2"
	
	
	cout	<< "Type your first number: ";						// Prints "Type your first number :" to the console 
	cin		>> number_1;										// Where "number_1"  becomes an accepted variable
		
	cout 	<< "Type your second number : ";					// Prints "Type your second number :" to the console 
	cin		>> number_2; gap;									// Where "number_2"  becomes an accepted variable
		
	cout 	<< "Your first number is = " 
			<< number_1											// Where variable "number_1" is printed
			<< endl;
				
	cout 	<< "Your second number is = "
			<< number_2											// Where variable "number_2" is printed
			<< endl;
	
	
	
	cout	<< "\n\n--------------------------------\n";
	
	// Addition	
				
	cout	<< "[[ADDITION]]" << endl; gap;
	
	double	addition_outturn = number_1 + number_2;	gap;		// Where both variables are summed 
		
	cout 	<< "CALCULATING " << endl; gap;
	 	
	cout	<< number_1
	 		<< " + "
	 		<< number_2
			<< " = " 
	 		<< addition_outturn									// Where sum of both variables are printed 
			<< endl; gap;
	
	
	
	cout	<< "\n--------------------------------\n";
	
	// Subtraction	

    cout	<< "[[MINUS]]" << endl; gap;
	
	double	subtraction_outturn = number_1 - number_2; gap;		// Where both variables are subtracted
		
	cout 	<< "CALCULATING " << endl; gap;
	 	
	cout	<< number_1
	 		<< " - "
	 		<< number_2
			<< " = " 
	 		<< subtraction_outturn								// Where subtraction of both variables are printed                            
	 		<< endl; gap;
	
	
	
	cout	<< "\n--------------------------------\n";
	
	// Division

	cout	<< "[[DIVISION]]" << endl; gap;
	
	double	division_outturn = number_1 / number_2;	gap;		// Where both variables are divided
		
	cout 	<< "CALCULATING " << endl; gap;
	 	
	cout	<< number_1
	 		<< " / "
	 		<< number_2
	 		<< " = " 
	 		<< division_outturn									// Where division of both variables are printed 
	 		<< endl; gap;
	
	
	
	cout	<< "\n--------------------------------\n";
	
	// Multiplication 
	
   	cout 	<< "[[MULTIPLICATION]]" << endl;			
				
	double	multiplication_outturn = number_1 * number_2; gap;	// Where both variables are multiplied 
		
	cout 	<< "CALCULATING " << endl; gap;
	 	
	cout	<< number_1
	 		<< " * "
	 		<< number_2
			<< " = " 
	 		<< multiplication_outturn							// Where multiplication of both variables are printed
	 		<< endl; gap;
	
	
	
	cout	<< "\n--------------------------------\n";
	
	cout	<< "Calculation Successfull " << endl;				// Where succeess of calculation is printed 
	
	
	return 0;	
}
