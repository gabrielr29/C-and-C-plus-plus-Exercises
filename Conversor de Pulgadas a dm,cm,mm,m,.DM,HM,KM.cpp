#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(){

char opc;
double pulg;

do{
	system("cls");
	
	cout<<"Ingrese una medida en pulgadas"<<endl;
	cin>>pulg;
	
			
	cout<<"\n*Convertir a mm (1)\n";
	cout<<"\n*Convertir a cm (2)\n";
	cout<<"\n*Convertir a dm (3)\n";
	cout<<"\n*Convertir a m (4)\n";
	cout<<"\n*Convertir a DM (5)\n";	
	cout<<"\n*Convertir a HM (6)\n";
	cout<<"\n*Convertir a KM (7)\n";
	cout<<"\n*Convertir a todas las unidades anteriores (8)\n";
	cout<<"\n*Salir (9)\n"<<endl;
	
opc=getch();
switch(opc){
case '1':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*25.4<<"mm"<<endl;
	system("pause");
	break;
case '2':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*2.54<<"cm"<<endl;
	system("pause");
	break;
	
	case '3':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*0.254<<"dm"<<endl;
	system("pause");
	break;
	
	case '4':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*0.0254<<"m"<<endl;
	system("pause");
	break;
	
	case '5':
	system("cls");
	cout<<"Es equivalente a"<<endl;	
	cout<<pulg*0.00254<<"DM"<<endl;
	system("pause");
	break;
	
	case '6':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*0.000254<<"HM"<<endl;
	system("pause");
	break;
	
	case '7':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	cout<<pulg*0.0000254<<"KM"<<endl;
	system("pause");
	break;
	
	case '8':
	system("cls");
	cout<<"Es equivalente a"<<endl;
	
	
	cout<<pulg*25.4<<"mm"<<endl;
	cout<<pulg*2.54<<"cm"<<endl;
	cout<<pulg*0.254<<"dm"<<endl;
	cout<<pulg*0.0254<<"m"<<endl;
	cout<<pulg*0.00254<<"DM"<<endl;
	cout<<pulg*0.000254<<"HM"<<endl;
	cout<<pulg*0.0000254<<"KM"<<endl;
	system("pause");
	
	break;
	
	
	case '9':
	system("cls");
	
	cout<<"Gracias por usar este programa, el socialismo no funciona"<<endl;
	system("pause");
	break;
	
}	
	
}while(opc!='9');	
	
	
	
	
}
