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
	
	cout<<"\n"<<"  Ingrese el numero cuyos divisores desea conocer:"<<"\n"<<"   >";
	cin>>number;
		
	if(isNumberInt(number)){
		
	exit=false;
 	n=stoi(number);
	return n;	

	
	}
	
	else{
	system("cls");
	cout<<"\n"<<"  Numero invalido, solo se permiten enteros no negativos, presione una tecla para volver a intentar"<<"\n";	
	
	getch();
	
	}
			
	}while(exit);
	
}

int mostrar_divisores(int n){
	
	if(n==0){
		cout<<"\n"<<" No se admiten divisiones entre cero compa"<<endl;
	}
	
	else{
	}
	
	for(int i=1; i<=n ; i++){
		
		if(n%i==0){
			
			cout<<"\n"<<"  "<<i<<" <-- Es un divisor de "<<n<<" "<<"\n";
			
			}
		else{
			
		}	

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
	
	cout<<"Bienvenido a este programa para calcular divisores, presione 1 para iniciar o 0 para salir."<<endl; 
	

	opc=getch();
	
	switch(opc){
	
	case '1':
		
	numberint=comprobador(numberdiv);

	mostrar_divisores(numberint);
	
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
