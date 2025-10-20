#include <iostream>

using namespace std;

/* 
--------------------- SPANISH --------------------------

Cree un programa que permita convertir de numeros romanos a enteros.
Para este programa no puede usar maps, solo sentencias repetitivas,
2 funciones (sin contar el main), condicionales y la sentencia Switch-case.

--------------------- ENGLISH --------------------------

"Write a program to convert Roman numerals to integers.

The program must adhere to the following constraints:

Do not use maps (or dictionaries/hash tables).

Must use only iterative statements (loops).

Must use two functions (excluding the main function).

Must use conditional statements (if/else).

Must use the switch-case statement."

*/

int romanToInteger(char caracter){
	
	switch(caracter){
				
		case 'I':
			return 1;

		case 'V':
			return 5;

		case 'X':
			return 10;
	
		case 'L':
			return 50;

		case 'C':
			return 100;

		case 'D':
			return 500;

		case 'M':
			return 1000;
		
		default:
			return 0;	
		
	}
	
	
	
}

int verifyRomanNumber(string chain){
	
		int number = 0;
		int numberAux;
		
	    for (int i = 0; i < chain.length(); i++) {
        char caracter = chain[i];
        char caracterAux = chain[i+1];        
         
        if(romanToInteger(caracter) < romanToInteger(caracterAux) && (i != chain.length())){
        	
        	number =  -(romanToInteger(caracter)) + number;
			        	
		}
		else if((romanToInteger(caracter) >= romanToInteger(caracterAux)) || (i == chain.length())){
			
			number = number + romanToInteger(caracter);
			
		}
     
		}
		
		return number;    
	
}

int main(){
	
	
	string romanNumber = "XL";

	cout<<romanNumber.length()<<endl;
	cout<<romanToInteger('X')<<endl;
	
	cout<<verifyRomanNumber(romanNumber);
	
	
}




