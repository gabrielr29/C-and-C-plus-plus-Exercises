#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std; 

 int gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
 //El tamaño en X es igual al tamaño ingresado multiplicado por 2 
 
void marco(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n*2;i++)
    {
            for(j=0;j<n*2;j++)
            {
                    if( j==0 || i==0 || i==((n*2)-1) || j==((n*2)-1))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

// Version para aumentar el tamaño en X (tamaño ingresado+5) y reducir en Y (mitad del tamaño ingresado +2)

void marco2(int x, int y, int n)
{
   int i,j;
    for(i=0;i<(n*2)+5;i++)
    {
            for(j=0;j<(n*2)+5;j++)
            {
                    if( j==0 && i<(n/2)+2 || i==0 && i<n/2 || i==(n/2)+2 || j==(((n*2)+5)-1) && i<(n/2)+2 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void separador(string code, int n){
	int x=0, y=0;
	for(int i=3;i<11;i++){
		for(int j=27;j<43;j++){
			gotoxy(x+j,y+i);
			cout<<".";
			
		}
	}
	
	gotoxy(45 , n);
	
	cout<<code;
	
}

void lista_proceres(){

int n=4;	
	
 marco2(1,1,30);
 gotoxy(n,3);		
 cout<<"Simon Bolivar";
 separador("1",3);
 gotoxy(n,4);
 cout<<"Simon Rodriguez"; 	
 separador("2",4);	
 gotoxy(n,5);	
 cout<<"Luisa C. De Arismendi";
 separador("3",5);
 gotoxy(n,6);	
 cout<<"Jose Antonio Paez";
 separador("4",6);
 gotoxy(n,7);
 cout<<"Jose L. Chirinos";
 separador("5",7);
 gotoxy(n,8);
 cout<<"Eulalia Ramos";
 separador("6",8);
 gotoxy(n,9);
 cout<<"Jose A. Anzoategui";
 separador("7",9);
 gotoxy(n,10);
  cout<<"Salir";
 separador("8",10);
 
}


void filter(){
char opc;
do{

	system("cls");
  
  
   gotoxy(4,16);
   cout<<"Ingrese el numero correspondiente al procer cuya "<<endl;
   cout<<"               informacion desee consultar  >"<<endl<<endl;
   	
   lista_proceres();
   gotoxy(45,17); 
    
    
opc=getch();
switch(opc){
	
case '1':
	
	system("cls");

	gotoxy(4,3);
	
	cout<<"   Simon Jose Antonio de la Santisima Trinidad "<<endl;
	cout<<"   Bolivar Palacios Ponte y Blanco."<<endl;
	cout<<"   Nacimiento: Caracas, 24 de julio de 1783  "<<endl;
	cout<<"   Fallecimiento: Santa Marta, 17 de diciembre de 1830."<<endl;
	cout<<"   Contribuyo a inspirar y concretar de manera decisiva "<<endl;
	cout<<"   la independencia de Bolivia, Colombia, Ecuador, "<<endl;
	cout<<"   Panama, Peru y Venezuela."<<endl;
	cout<<"   Causa de muerte: Tuberculosis."<<endl;
	
	marco2(1,1,30);
	
	getch();
	
	break;
	
case '2':
	
	system("cls");

	gotoxy(4,3);
	
	cout<<"   Simon Narciso de Jesus Carreño Rodriguez."<<endl;
	cout<<"   Nacimiento: Caracas, 28 de octubre de 1769  "<<endl;
	cout<<"   Fallecimiento: Amotape, 28 de febrero de 1854"<<endl;
	cout<<"   Fue tutor de Simon Bolivar y Andres Bello."<<endl;
	cout<<"   Causa de muerte: Se registra que murio pobre y sin hogar, "<<endl;
	cout<<"   probablemente causas naturales o una enfermedad comun."<<endl;
	cout<<"   Se dice que Simon Bolivar lo llamaba <El Socrates de Colombia>."<<endl;
	
	marco2(1,1,30);
		
	getch();
	
	break;
	
	case '3':
		
	system("cls");

	gotoxy(4,3);
	
	cout<<"   Luisa Caceres Diaz de Arismendi."<<endl;
	cout<<"   Nacimiento: Caracas, 25 de septiembre de 1799 "<<endl;
	cout<<"   Fallecimiento: Caracas, 2 de junio de 1866"<<endl;
	cout<<"   Causa de muerte: Se registra que murio siendo anciana."<<endl;
	cout<<"   Probablemente de causas naturales. "<<endl;
	cout<<"   El 24 de agosto de 1876 se convirtio en la primera mujer"<<endl;
	cout<<"    en ser exaltada al Panteon Nacional."<<endl;
	
	marco2(1,1,30);
	
	getch();
	
	break;
	
	case '4':
		
	system("cls");	

	gotoxy(4,3);	
		

	cout<<"   Jose Antonio Paez Herrera."<<endl;
	cout<<"   Nacimiento: Curpa, Capitania General de Venezuela, "<<endl;
	cout<<"   Imperio español, 13 de junio de 1790. "<<endl;
	cout<<"   Fallecimiento: Nueva York, 6 de mayo de 1873"<<endl;
	cout<<"   5to Presidente del Estado de Venezuela"<<endl;
	cout<<"   Causa de muerte:  Bronconeumonia,     "<<endl;
	cout<<"   resultado de un fuerte resfriado. "<<endl;
	cout<<"   Es llamado <El Centauro de los Llanos> y lidero el "<<endl;
	cout<<"   movimiento separatista conocido como <La Cosiata>."<<endl;

	marco2(1,1,30);
	
	getch();
	
	break;
	
	case '5':
	system("cls");

	gotoxy(4,3);
	
	cout<<"   Jose Leonardo Chirino."<<endl;
	cout<<"   Nacimiento: Curimagua, Falcon, 25 de abril de 1754"<<endl;
	cout<<"   Fallecimiento: Caracas, 10 de diciembre de 1796"<<endl;
	cout<<"   Causa de muerte:  Arrastramiento, ahorcamiento y"<<endl;
	cout<<"   posterior desmembramiento. Su cabeza y manos se "<<endl; 
	cout<<"   expusieron en varios sitios para amedrentar a otros"<<endl;
	cout<<"   posibles rebeldes. Todo esto como castigo por su "<<endl;
	cout<<"   intento de levantamiento contra la esclavitud.    "<<endl;
	
	marco2(1,1,30);

	getch();
	break;
	
	case '6':
	system("cls");
	
	gotoxy(4,3);
	
    cout<<"   Eulalia Ramos Sanchez."<<endl;
	cout<<"   Nacimiento: Tacarigua de Mamporal, 12 de febrero de 1795."<<endl;
	cout<<"   Fallecimiento: Barcelona (Venezuela), 7 de abril de 1817."<<endl;
	cout<<"   Causa de muerte:  Asesinato durante el asalto a la Casa  "<<endl;
	cout<<"   Fuerte en Barcelona.  Antes de morir le disparo al "<<endl;
	cout<<"   soldado que le ofrecio rendirse por su vida al grito"<<endl;
	cout<<"    de <Viva la patria, muerte a los tiranos>. Luego otros "<<endl;
	cout<<"   soldados acabaron con ella."<<endl;
	
	marco2(1,1,30);
	
	getch();
	break;
	
	case '7':
		
	system("cls");
	gotoxy(4,3);
	
    cout<<"   Jose Antonio Anzoategui y Hernandez"<<endl;
	cout<<"   Nacimiento: Barcelona, Anzoategui, 14/11/1789"<<endl;
	cout<<"   Fallecimiento: Pamplona, Colombia, 15/11/1819"<<endl;
	cout<<"   Causa de muerte:  Fiebre Mortal segun Thomas Fooley."<<endl;
	cout<<"   Simon Bolivar dijo: <Habria preferido perder dos    "<<endl;
	cout<<"   batallas a la muerte de Anzoategui. ¡Que soldado ha "<<endl;
	cout<<"   perdido el ejercito y que hombre la Republica!      "<<endl;
	
	marco2(1,1,30);
	
	getch();
	
	break;
	
	
	case '8':
		
	system("cls");
	gotoxy(4,3);
	
	cout<<"   Fuentes de informacion:"<<"\n\n";
	cout<<"   https://es.wikipedia.org/"<<endl;
	cout<<"   https://manuelalibertadora.blogspot.com/"<<endl;
	cout<<"   https://www.venezuelatuya.com/"<<endl;
	cout<<"   https://www.cimos.com.ve/"<<endl<<endl;
	
	
	cout<<"   Gracias por usar este programa, Soli Deo Gloria."<<endl;
	
	marco2(1,1,30);
	
	getch();
	

	break;
	
}	
	
}while(opc!='8');	
	
	
	

	
}



int main(){
	
	
  filter();
	
	
	
	
return 0;	
}
