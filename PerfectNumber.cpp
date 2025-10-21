#include <iostream>

using namespace std;

/* 
--------------------- SPANISH --------------------------

Realice un programa que reciba un número por teclado y determine
si es perfecto. Un número perfecto es un número entero positivo que es
igual a la suma de sus divisores propios positivos (es decir, la suma
de sus divisores, excluyéndose a sí mismo).

--------------------- ENGLISH --------------------------

Write a program that receives a number from the keyboard and determines whether it is perfect. A perfect number is a positive integer that is equal to the sum of its positive proper divisors (i.e., the sum of its divisors, excluding itself).

*/

bool isPerfect(int number){
int suma = 0;

    for(int i=1; i<number; i++){

        if(number%i == 0){
            suma += i;
        }

    }

    return suma == number;


}



void showIsPerfectOrNot(){

    int number = 0;

    cout<<"Ingrese un numero entero: "<<endl;
    cin>> number;

    if(isPerfect(number)){
        cout<<"El numero ingresado: "<<number<<", es perfecto."<<endl;
    }else{
        cout<<"El numero ingresado: "<<number<<", no es perfecto."<<endl;
    }

}

int main(){
	
showIsPerfectOrNot();	
	
}