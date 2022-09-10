#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;

int main(){
	
	double a, b, c;
	double solu1=0, solu2=0, RootI;
	char selector;
	
	do{
				
	
 		cout<<"Recordando que la forma general de la ecuacion cuadratica es:\n";
		cout<<"ax^2 +- bx +- c = 0" << "\n\n";

 		cout<<"Ingrese el coeficiente de x^2, la variable a:"<<"\n\n";
 		cin>>a;
 
 		cout<<"Ingrese el coeficiente de x, la variable b:"<<"\n\n";
 		cin>>b;
  
 		cout<<"Ingrese la variable c"<<"\n\n";
 		cin>>c;	
 	
 		RootI = (b*b) - 4 * (a*c);
 
  		if(RootI < 0 || a==0){   
    
       	cout << "Esta ecuacion no tiene solucion en el sistema de numeros reales" << "\n\n";
                     
   		 }
    
  		else{
  	
  	    solu1 = ( -b + sqrt(RootI) ) / (2*a);
		
        solu2 = ( -b - sqrt(RootI)) / (2*a);
  	
  		 if(solu1 != solu2){   
            
			cout << "Solucion 1: " << solu1 << "\n\n";
            cout << "Solucion 2: " << solu2 << "\n\n";
        
        
  	
   		 }
    
           else{
        	
			cout << "Solo existe una solucion:" << solu1<<"\n\n";
            
        }
  	
  } 
 

	
	cout<<"Si desea salir, pulse x, sino presione cualquier otra tecla para comprobar otro caracter"<<endl;
	
	selector=getch();
	
	system("cls");	
	
	}while(selector!='x' && selector!='X');

return 0;

}
