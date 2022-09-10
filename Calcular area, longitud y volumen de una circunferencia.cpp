#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(void){
	
	double radio;
	char opc;
	
do{
	
	system("cls");
	
	cout<<"Ingrese el radio para calcular el area, diametro y longitud correspondientes"<<endl;
	cout<<">> ";
	
	cin>>radio;
	
	cout<<"La longitud de la circunferencia es: "<<(2*3.1415*radio)<<endl;
	cout<<"El area de la circunferencia es: "<<(3.1415*(radio*radio))<<endl;
	cout<<"El diametro de la circunferencia es: "<<((2*radio))<<"\n\n";
	
	cout<<"Para salir presiona 0, si deseas seguir calculando presiona cualquier tecla "<<endl;
	
    opc=getch();

switch(opc){
	
case '0':
	
	system("cls");
	cout<<"Gracias por usar este programa, bendito el que vive por los siglos asies"<<endl;
	getch();
	
	opc='0';
	
	break;
	
default:
	
	system("cls");

}	
	
}while(opc!='0');	
	
}

