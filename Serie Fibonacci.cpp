#include <iostream>
#include <conio.h>
#include <windows.h> 

using namespace std;


void selector(){
	
int opc=1;
char opc2;

string numberdiv;

int numberint;

double n1 = 0, n2=1, counter=0;

system("cls");
	
cout<<"Bienvenido a este programa para generar la serie Fibonacci."<<endl; 
cout<<"Presione 1 para iniciar, 0 para salir."<<endl; 

while(opc!='0'){
	
	opc=getch();
	
	switch(opc){
	
	case '1':
		
	do{
		
		cout.precision(0);
		cout<<fixed<<n1<<" , "<<n2<<endl<<endl;
		
		n1=n1+n2;
		n2=n1+n2;		
	
		counter++;
			
	}while(counter<20);	
		
	do{	
		
	cout<<endl<<"Desea continuar (Presione 1) o finalizar el bucle (Presione 0)? ";
	
	opc2=getch();
	
	switch(opc2){
		
		case '1':
		counter=0;	
		do{
		cout.precision(0);
		cout<<fixed<<n1<<" , "<<n2<<endl<<endl;
		
		
		n1=n1+n2;
		n2=n1+n2;		
	
		counter++;
			
		}while(counter<20);	
		
		break;
		
		case '0':
		
		cout<<"\n"<<"Gracias por usar este programa, saludos desde Venezuela!"<<"\n";
		
		opc='0';
		
		break;
			
	}		
		
	}while(opc2!='0');
		
		
	break;
	
	case '0':
	
	cout<<"\n"<<"Gracias por usar este programa, saludos desde Venezuela!"<<"\n";
	
	opc='0';
				
	break;
	
	default:
	break;
	
}	

}	
}
	


int main(){

selector();

return 0;

}
