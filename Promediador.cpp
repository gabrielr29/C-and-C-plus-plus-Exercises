#include<iostream>

#include<conio.h>

#include<iomanip>

#include<windows.h>

// Calculador de promedios - gabrielr29 - El socialismo no funciona

using namespace std;

int main()
{

	double nbs[200] ;
    int c=0;
	boolean val=false;
	char opc;
	double p1=0, p2=0;
	double result=0;
	
	cout<<"Bienvenido a esta calculadora de promedios\n";
		
	do{

	cout<< "Ingrese un numero: \n";
	
	cin>>nbs[c];

	
	cout<<"\nDesea seguir agregando numeros?  (Y/N)\n\n";
		
		do{
			
			opc=getch();
			
			if(opc=='y' || opc=='Y'){
			
			c++; //Lo dijo, lo dijoxd	
			system ("cls");	
				
			}
			
			else if (opc=='N' || opc=='n'){
				
				if(c==0){
					
				system ("cls");
				
				cout<<"		__________________________________________"<<endl;
				cout<<"		|El promedio es:<< "<<nbs[0]<<endl;
				cout<<"		| Usted solo agrego un numero             "<<endl;
				cout<<"		|_________________________________________"<<endl;
				cout<<"\n ";
				val=true;
				opc='y';
				}
				
				else{
					
					for(int i=0; nbs[i]!='\0'; i++){
					
					p1=p1+nbs[i];
					
					
					}	
					p2=c;
				
					result=p1/(c+1);
					system ("cls");	
						cout<<c<<"   "<<p1;
					cout<<"		__________________________________________"<<endl;
					cout<<"		|El promedio es:<< "<<fixed<<result<<endl;
					cout<<"		|_________________________________________"<<endl;
					cout<<"\n ";
					val=true;
					
					
					
					
					
				}
						
				
				
			}
			
		}while(opc!='y' && opc!='Y' && opc!='N' && opc!='n');
	
	
	
	
		
		
	}while(!val);
	
	getch();
	
	return 0;
	
	
	}
