#include <iostream>
#include <conio.h>

using namespace std;

int calculator_all(int counter){
	
	int m1,m2,m3,r;
		
	cout<<"Ahora se mostraran todos los numeros entre 100 y 999 cuyo producto de cifras "<<endl<<"resulte en 12"<<endl;
	cout<<"\nPresione cualquier tecla para continuar"<<endl;
	getch();
	
	for(int a=100; a<1000; a++){
		
	m1=a%10;
	m2=(a/10)%10;
	m3=a/100;
	r=m1*m2*m3;
	if(r==12){
		counter++;
		cout<<"Las cifras que componen el numero "<<a<<" cumplen la condicion"<<endl;
	}
	else{
	}
			
	}
	cout<<"El total de numeros en el intervalo que cumplen la condicion es: "<<counter;
	
}


int main(){
	int c=0;
	calculator_all(c);
	return 0;
	
}
