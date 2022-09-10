#include<iostream>
#include<conio.h>
#include<windows.h>
#include <math.h>

using namespace std;

bool isNumberInt(const string& str)
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}

int comprobador(string number){
	
	bool exit=true;
	long long int n;
	
	do{
		
	system("cls");
	
	cout<<"\n"<<"  Ingrese el numero (sistema decimal) cuyas conversion desea realizar:"<<"\n"<<"   >";
	cin>>number;
		
	if(isNumberInt(number)){
		
	n=stoi(number);
	
 	if(n>480000){
 		system("cls");
 		cout<<"\n"<<"  Numero invalido, max 480.000"<<"\n";
 		getch();
	 }
	 
	else{
	exit=false;	
	return n;
		
	} 

	}
	
	else{
	system("cls");
	cout<<"\n"<<"  Numero invalido, solo se permiten enteros no negativos, presione una tecla para volver a intentar"<<"\n";	
	
	getch();
	
	}
			
	}while(exit);
	
}


long long int conv_sistema(long long int n, long long int nsystem){
	
	long long int aux=0, aux2=0, cont=0;
	
	do{

		aux2 = n % nsystem *pow(10,cont) + aux2;
		
		aux = n/nsystem;
		
		n = aux;
		
		cont++;		
		
	}while(n>0);
	
	return aux2;
}


void exit(){

	cout<<"\n\n"<<"Presione cualquier tecla para volver al menu";
	
	getch();
	
	system("cls");

}


void selector(){
	
int opc;

string numberdiv;

long long int numberint;
	

do{
	
	system("cls");
	
	cout<<"__________________________________________________________________________" <<endl; 
	cout<<"|                                                                         |"<<endl; 
	cout<<"|  Bienvenido a este programa para convertir a otros sistemas numericos.  |"<<endl; 
	cout<<"|                                                                         |"<<endl;
	cout<<"|   Presione (1) para convertir a todos los sistemas disponibles.         |"<<endl;  
	cout<<"|   Presione (2) para convertir a sistema binario.                        |"<<endl; 
	cout<<"|   Presione (3) para convertir a sistema ternario.                       |"<<endl;
	cout<<"|   Presione (4) para convertir a sistema cuaternario.                    |"<<endl;
	cout<<"|   Presione (5) para convertir a sistema quinario.                       |"<<endl;
	cout<<"|   Presione (6) para convertir a sistema senario.                        |"<<endl;
	cout<<"|   Presione (7) para convertir a sistema septenario.                     |"<<endl;
	cout<<"|   Presione (8) para convertir a sistema octal.                          |"<<endl;
	cout<<"|   Presione (9) para convertir a sistema nonario.                        |"<<endl;
	cout<<"|   Presione (0) para salir.                                              |"<<endl;
	cout<<"|_________________________________________________________________________|"<<endl; 
	
	opc=getch();
	
	switch(opc){
		
	case '1':
		
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,2)<<" - Sistema binario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,3)<<" - Sistema ternario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,4)<<" - Sistema cuaternario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,5)<<" - Sistema quinario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,6)<<" - Sistema senario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,7)<<" - Sistema septenario"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,8)<<" - Sistema octal"<<endl;
	cout<<endl<<"   >"<<conv_sistema(numberint,9)<<" - Sistema nonario"<<endl;
		
	exit();
		
	break;
	
	case '2':
		
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,2);
	
	exit();
		
	break;
	
	case '3':
		
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,3);
	
	exit();
		
	break;
	
	case '4':
		
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,4);
	
	exit();
		
	break;
	
	case '5':
		
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,5);
	
	exit();
		
	break;
	
	case '6':
	
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,6);
	
	exit();
		
	break;
	
	case '7':
	
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,7);
	
	exit();
		
	break;
	
	case '8':
	
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,8);
	
	exit();
		
	break;
	
	case '9':
	
	numberint=comprobador(numberdiv);

	cout<<endl<<"   >"<<conv_sistema(numberint,9);
	
	exit();
		
	break;
		
	case '0':
	
	cout<<"\n"<<"Gracias por usar este programa, saludos desde Venezuela!"<<"\n";
				
	break;
	
	default:
	break;
	
}	
		
	
}while(opc!='0');

}	
	



int main(){
	
	selector();
		
	return 0;
	
	
}