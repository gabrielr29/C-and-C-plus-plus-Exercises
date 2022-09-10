#include <iostream>
#include <conio.h>
#include <windows.h> 
#include <string>

using namespace std;

bool isNumberInt(const string& str)
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}

int comprobador(string number){
	
	bool exit;
	int n;
	
	do{
	system("cls");
	
	cout<<"\n"<<"  Ingrese el year en que naciste:"<<"\n"<<"   >";
	cin>>number;
		
	if(isNumberInt(number)){
		
	exit=false;
 	n=stoi(number);
	return n;	

	
	}
	
	else{
	system("cls");
	cout<<"\n"<<" Numero invalido, solo se permiten enteros no negativos, presione una tecla para volver a intentar"<<"\n";
	return 0;
	
	}
			
	}while(exit);
	
}

void mostrar_generacion(int n){
	
	if(n>1899 && n<1915){
		cout<<"\n"<<" Perteneces a la generacion Interbellum"<<endl;
	}
	else if(n>1914 && n<1926){
		cout<<"\n"<<" Perteneces a la generacion Grandiosa"<<endl;
	}
	else if(n>1925 && n<1946){
		cout<<"\n"<<" Perteneces a la generacion Silenciosa"<<endl;
	}
	else if(n>1945 && n<1965){
		cout<<"\n"<<" Perteneces a la generacion Baby Boomer"<<endl;
	}
	else if(n>1964 && n<1982){
		cout<<"\n"<<" Perteneces a la generacion X"<<endl;
	}
	else if(n>1981 && n<1995){
		cout<<"\n"<<" Perteneces a la generacion Y o Millenials"<<endl;
	}
	else if(n>1994 && n<2012){
		cout<<"\n"<<" Perteneces a la generacion Z"<<endl;
	}
	else if(n>2011 && n<2026){
		cout<<"\n"<<" Perteneces a la generacion Alfa";
	}
	else{
	}

}

void exit(){

	cout<<"\n\n"<<"Presione cualquier tecla para volver al menu";
	
	getch();
	
	system("cls");

}

void selector(){
	
int opc;

string numberdiv;

int numberint;
	

do{
	
	system("cls");
	
	cout<<"Bienvenido a este programa para verificar a que generacion perteneces"<<endl; 
	cout<<" Presione 1 para continuar o 0 para salir";

	opc=getch();
	
	switch(opc){
	
	case '1':
		
	numberint=comprobador(numberdiv);
	if(numberint==0){
	cout<<endl<<"     > ERROR <"<<endl;	
	}
	else if(numberint<=1899){
	cout<<"Hmmm, le robaste el secreto de la inmortalidad a Chabelo?";
	}
	else if(numberint>2025){
	cout<<"Vienes del futuro, eh?";
	}
	else{
	mostrar_generacion(numberint);	
	}
	
	exit();
		
	break;
	
	case '0':
	
	cout<<"\n"<<"Gracias por usar este programa, Soli deo Gloria!"<<"\n";
				
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