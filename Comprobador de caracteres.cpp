#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()

{
    char c;
	char selector;
	do{
				
	cout<<"Ingrese un caracter de su preferencia"<<endl;
	c=getch();
	if(c>='0' && c<='9')
	{
		cout<<c<<" Es un numero"<<endl;
	} 
	else if (c>='A' && c<='z')
	{
		if(c>='a' && c<='z')
		{
			cout<<c<<" Es una letra minuscula"<<endl;
		}else
		cout<<c<<" Es una letra mayuscula"<<endl;		
	}else{
		cout<<c<<" No es ni un numero ni una letra"<<endl;	
	}


	
	cout<<"Si desea salir, pulse x, sino presione cualquier otra tecla para comprobar otro caracter"<<endl;
	
	selector=getch();
	
	system("cls");	
	
	}while(selector!='x' && selector!='X');
	return 0;
}
