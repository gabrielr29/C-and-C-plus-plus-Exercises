#include <math.h>
#include <iostream>
#include<conio.h>
#include<windows.h>
#include <cstdlib>

using namespace std;

float pi = 3.14159;


double perim(double radio){
	double p;
	
	p=2*pi*radio;
	
	return p;
}

double area(double radio){
	double area;
	
	area = pi * (radio*radio);
	
	return area;
}

void selector(){
	
	char opc;
	double radio=0;
	
	do{
	
	cout<<"\t \t ____________________________________________________________________________ \n";
	cout<<"\t \t |                                                                           |\n";
	cout<<"\t \t | Saludos, bienvenido a esta calculadora de perimetros y areas de circulos  |\n";
	cout<<"\t \t |       Ingresa el area del circulo cuyo perimetros desees conocer          |\n";
	cout<<"\t \t |___________________________________________________________________________|\n\n";
	cout<<"\t \t   >> ";
	cin>>radio;
	
	
	
	cout<<"\t \t El perimetro es --> "<<perim(radio);
	cout<<"\t \t El area es -------> "<<area(radio);
	cout<<"\n \t \t Si deseas calcular otro perimetro presiona cualquier tecla, para salir presiona 0 \n";
	
	
		fflush(stdin);
	    opc=getch();
	    
		
		switch(opc){

		case '0':
		
		system("cls");
		
		cout<<"Gracias por usar este programa, el socialismo no funciona"<<endl;
			
		break;
		
		default:
		system("cls");
		break;
	
		}	
	
}while(opc!='0');	
	
}

int main(){
	
	selector();
	
	return 0;
	
}

