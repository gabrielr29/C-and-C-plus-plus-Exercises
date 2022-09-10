#include <iostream>
#include <conio.h>

using namespace std;

int calculator_cif(int a){
	
	bool v;
	int m1,m2,m3,r;
	
	
	do{
		
	cout<<"Ingresa un numero de 3 cifras: "<<"\n";
	cin>>a;
	
	if(a>999 || a<100){
		cout<<"De tres cifras capo, vuelve a intentar"<<endl;
	v=false;
	}
	else{
	v=true;
	}
		
		
	}while(v==false);
	

	
	m1=a%10;
	m2=(a/10)%10;
	m3=a/100;
	r=m1+m2+m3;
			
	cout<<"La suma de las tres cifras del numero ingresado es: "<<r;
	cout<<"\nPresione cualquier tecla para continuar"<<endl;
	getch();
}

int calculator_all(int counter){
	
	int m1,m2,m3,r;
		
	cout<<"Ahora se mostraran todos los numeros entre 100 y 999 cuyas cifras suman 10"<<endl;
	cout<<"\nPresione cualquier tecla para continuar"<<endl;
	getch();
	
	for(int a=100; a<1000; a++){
		
	m1=a%10;
	m2=(a/10)%10;
	m3=a/100;
	r=m1+m2+m3;
	if(r==10){
		counter = counter+1;
		cout<<"Las cifras que componen el numero "<<a<<" cumplen la condicion"<<endl;
	}
	else{
	}
			
	}
	cout<<"El total de numeros en el intervalo que cumplen la condicion es: "<<counter;
	
}


int main(){
	int a=0,c=0;
	//calculator_cif(a);
	calculator_all(c);
	return 0;
	
}
