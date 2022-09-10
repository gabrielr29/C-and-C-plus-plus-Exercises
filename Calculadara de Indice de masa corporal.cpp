#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(){
	
	float altura, peso,indice;
	boolean exit=false;
	char opc;
	
do{
	
	system("cls");
	
	cout<<"Ingrese su altura en metros"<<endl;
	cin>>altura;
	cout<<"Ingrese su peso en kilos"<<endl;
	cin>>peso;

    indice=peso/(altura*altura);
	
if(indice<16){
	cout<<"\n*Usted esta en el rango de infrapeso: Delgadez severa \n"<<endl;	
}
else if(indice>15.99 && indice<17){
	cout<<"\n*Usted esta en el rango de infrapeso: Delgadez moderada \n"<<endl;	
}
else if(indice>16.99 && indice<18.50){
	cout<<"\n*Usted esta en el rango de infrapeso: Delgadez aceptable \n"<<endl;	
}
else if(indice>18.49 && indice<25){
	cout<<"\n*Usted esta en el rango de peso normal \n"<<endl;	
}
else if(indice>24.99 && indice<30){
	cout<<"\n*Usted esta en el rango de sobrepeso \n"<<endl;	
}
else if(indice>29.99 && indice<35){
	cout<<"\n*Usted esta en el rango de obesidad tipo I \n"<<endl;	
}
else if(indice>24.99 && indice<=40){
	cout<<"\n*Usted esta en el rango de obesidad tipo II \n"<<endl;	
}
else if(indice>40){
	cout<<"\n*Usted esta en el rango de obesidad tipo III \n"<<endl;	
}

cout<<"\n*Desea seguir calculando indices de masa corporal? (Y/N) \n"<<endl;

do{
	opc=getch();
	switch(opc){
	
    case 'n':
	
	system("cls");
	exit=true;
	opc='n';
	system("pause");
	
	break;
	
    case 'y':
	
	system("cls");
	opc='y';
	exit=false;
	system("pause");
	
	break;


   }
	
}while(opc!='y' && opc!='n' );


}while(exit==false);

return 0;	
	
}
