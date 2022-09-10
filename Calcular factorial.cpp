#include<iostream>
#include<conio.h>
#include<windows.h>
#include <iomanip> //Para el setpresicion 

using namespace std;


boolean bucle_exit(){

char opc;

boolean exit;
		
	do{
		
	opc=getch();
	switch(opc){
	
    case 'n':
	
	system("cls");
	return exit=true;
	opc='n';
	system("pause");
	
	break;
	
    case 'y':
	
	system("cls");
	opc='y';
	return exit=false;
	system("pause");
	
	break;

   }
	
}while(opc!='y' && opc!='n' );


}



int main(){

long long int c=1,n;

boolean finish=false, comprobator;

do{

comprobator=false;  // Limpiando en caso de reutilización

do{
	
system("cls");	// Limpiando pantalla por si hay más de una vuelta

cout<<"Bienvenido! Ingrese un numero para calcular su factorial"<<endl;

cin>>n;	

if(n>39 || n<=0){
	
	cout<<"Numero invalido, intenta nuevamente, máximo (39)"<<endl;
	
	getch();
	
}

else{
	comprobator=true;		
}
	
}while(comprobator==false);	



for(int i=n; i>1;i--){
	c=c*i;
}

cout<<"El factorial del numero ingresado es: "<<c<<"\n\n"; 

//El fixed es para evitar un poco la notación científica y el setpresicion para reducir los decimales

cout<<"Desea calcular el factorial de otro numero? (y/n)"<<endl;

c=1; // Reinicia el valor de c, por si se va a reutilizar;

finish  =  bucle_exit();
	
}while(finish==false);

cout<<"Gracias por usar este programa! Soli Deo Gloria asies"<<endl;
	
}

