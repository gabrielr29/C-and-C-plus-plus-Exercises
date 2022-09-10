#include <iostream>
#include <conio.h>

using namespace std;

int calculator_cif(){
	
	bool v;
	int m1,m2,m3,r;
	int a;
	
	do{
		
	cout<<"Ingresa un numero: "<<"\n";
	cin>>a;
	
	if(a>1000000){
		cout<<"Demasiado grande, vuelve a intentar"<<endl;
	v=false;
	}
	else{
	v=true;
	return a;
	}
		
		
	}while(v==false);
	
	

	cout<<"\nPresione cualquier tecla para continuar"<<endl;
	getch();
}

int calculator_all(){
	
	int m1,m2,m3,r,counter=0,number;
	bool pass=0;
	
	do{
	number=calculator_cif();
	cout<<"Ahora se mostraran todos los numeros entre 100 y 999 cuyas cifras "<<endl;
	cout<<"suman el numero ingresado siempre y cuando no sea invalido."<<endl;
	cout<<"\nPresione cualquier tecla para continuar"<<endl;
	getch();
	
	for(int a=100; a<1000; a++){
		
	m1=a%10;
	m2=(a/10)%10;
	m3=a/100;
	r=m1+m2+m3;
	if(r==number){
		counter = counter+1;
		cout<<"Las cifras que componen el numero "<<a<<" cumplen la condicion"<<endl;
	}
	else{
	}
			
	}
	cout<<"El total de numeros en el intervalo que cumplen la condicion es: "<<counter;	
	pass=false;
		
	}while(pass);	
	
}


int main(){
	calculator_all();
	return 0;
	
}
