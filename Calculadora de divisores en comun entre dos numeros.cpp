#include <iostream>
#include <conio.h>
#include <windows.h> 
#include <string>

using namespace std;

bool isNumberInt(const string& str)
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}

int comprobador(string number, string t){
	
	bool exit;
	int n;
	
	do{
		
	system("cls");
	
	cout<<"\n"<<"  Ingrese el "<<t<<"numero para buscar sus divisores"<<"\n"<<"   >";
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


int mostrar_div_2(int n, int n2){
	
		
	if(n==0 || n2==0){
		cout<<"\n"<<" No se admiten divisiones entre cero compa"<<endl;
	}
	
	else if(n>n2){
		
		for(int i=1; i<=n ; i++){
		
		if(n%i==0 && n2%i==0){
			
			cout<<"\n"<<"  "<<i<<" <-- Es un divisor en comun entre "<<n<<" y "<<n2<<"\n";
			
			}
		else{
			
		}	

	}
		
	}
	
	else if(n2>n){
		
		for(int i=1; i<=n2 ; i++){
		
		if(n%i==0 && n2%i==0){
			
			cout<<"\n"<<"  "<<i<<" <-- Es un divisor en comun entre "<<n<<" y "<<n2<<"\n";
			
			}
		else{
			
		}	
		
	}
	
	}	

}

int mostrar_div_indv(int n){

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

string numberdiv, numberdiv2, numberdiv3;

int numberint, numberint2, numberint3;
	

do{
	
	system("cls");
	
	cout<<"Bienvenido a este programa para calcular divisores."<<" \n\n";
	cout<<"Presione (1) para calcular los divisores de un solo numero."<<endl;
	cout<<"Presione (2) para calcular los divisores de dos numeros y compararlos."<<endl;
	cout<<"Presione (0) para salir."<<endl; 

	opc=getch();
	
	switch(opc){
	
	case '1':
				
	numberint=comprobador(numberdiv,"");

	mostrar_div_indv(numberint);	
	
	exit();
		
	break;
	
	case'2':
		
	numberint=comprobador(numberdiv,"primer ");
	
	numberint2=comprobador(numberdiv2,"segundo ");
	
	if(numberint==numberint2){
		
		cout<<"\n Ambos numeros son iguales..."<<"\n\n";
		mostrar_div_indv(numberint);	
		exit();	
	}
	
	else{
	mostrar_div_2(numberint,numberint2);
	exit();	
	}
	
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
