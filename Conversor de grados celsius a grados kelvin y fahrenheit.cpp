#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

double convert_kelvin(double k){
	return (k+273.15);
}

double convert_fahren(double k){
	return (((k*9)/5)+32);
}


int main(){

char opc;
double cels;

do{
	system("cls");
	
	cout<<"Ingrese la temperatura en grados celsius que desee convertir"<<endl;
	cin>>cels;
	cout<<"\n*Convertir a grados Kelvin (1)\n";
	cout<<"\n*Convertir a grados Fahrenheit(2)\n";
	cout<<"\n*Convertir a ambas unidades antes mencionadas (3)\n";
	cout<<"\n*Salir (4)\n"<<endl;
	
opc=getch();

switch(opc){
	
case '1':
	
	system("cls");
	
	cout<<cels<<" "<<"grados Celsius "<<"equivale a"<<endl;
    cout<<convert_kelvin(cels)<<" "<<"grados Kelvin"<<endl;
	system("pause");
	
	break;
	
    case '2':
	system("cls");
	cout<<fixed<<cout.presicion(2)<<cels<<" "<<"grados Celsius "<<"equivale a"<<endl;
    cout<<convert_fahren(cels)<<" "<<"grados Fahrenheit"<<endl;

	system("pause");
	break;
	
	case '3':
	system("cls");
	cout<<cels<<" "<<"grados Celsius "<<"equivale a"<<endl;
	cout<<convert_kelvin(cels)<<" "<<"grados Kelvin"<<endl;
    cout<<convert_fahren(cels)<<" "<<"grados Fahrenheit"<<endl;
    
	system("pause");
	break;
	
	case '4':
	system("cls");
	cout<<"Gracias por usar este programa, el socialismo no funciona"<<endl;
	system("pause");
	break;

}	
	
}while(opc!='4');	
	
	
	return 0;
	
}
