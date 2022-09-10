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

//Diagonal invertida  j==n-i       Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

// j=x  i=y

void zero(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || i==0 || i==n-1 || j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void one(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=n*-1/3;j<n;j++)  //Para cambiar el recorrido de las x y considerar los negativos j=n*-1/3
            {
                    if(j==0 || i==j*-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void two(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j<n  || i==n-1 || j==0 && i<(n/2)-1 || i==n/2 && j<n || j==n-1 && i<n/2 || j==0 && i>n/2 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void three(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j<n  || i==n-1 || i==n/2 && j<n || j==n-1 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void four(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==n-1 || i==n/2 && j<n || i<n/2 && j==0 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void five(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0&&j<n ||  (j<=n-1&&i==n/2) || i==n-1 || j==0&&i<n/2 || j==n-1&&i>=n/2&&i<n)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void six(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i<n && j==0 || i==0 || i==n/2 && j<n || i==n-1 || i>n/2 && j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void seven(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0  ||  j==n-i || j==0 && i<(n/2)-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void eight(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 ||  j==n-1 || j==0 || j==n-1 || i == n/2|| i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void nine(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 ||  i==n/2 || j==n-1 || i==n-1 || j==0 && i<n/2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void filter(int random1, int random2){
	
	//Para el primer dado
	
	if(random1==1){
	one(10,7,6);
	}
	else if(random1==2){
		
	two(7,7,6);			

	}
	else if(random1==3){
		
	three(7,7,6);
		
	}
	else if(random1==4){
		
	four(7,7,6);
	
	}
	else if(random1==5){
	
	five(7,7,6);	
		
	}
	else if(random1==6){
		
	six(7,7,6);	
		
	}
	else if(random1==7){
	
	seven(7,7,6);	
		
	}
	else if(random1==8){
	
    eight(7,7,6);
		
	}
	else if(random1==9){
		  
    nine(7,7,6);	
		
	}
	
	else{
	}
	
	//Para el segundo dado
	
	if(random2==1){
	one(27,7,6);
	}
	else if(random2==2){
		
	two(24,7,6);		

	}
	else if(random2==3){
		
	three(24,7,6);
		
	}
	else if(random2==4){
		
	four(24,7,6);
	
	}
	else if(random2==5){
	
	five(24,7,6);	
		
	}
	else if(random2==6){
		
	six(24,7,6);	
		
	}
	else if(random2==7){
	
	seven(24,7,6);	
		
	}
	else if(random2==8){
	
    eight(24,7,6);
		
	}
	else if(random2==9){
		  
    nine(24,7,6);	
		
	}
		
	
}

void fondo_dados(){

zero(5,5,10);

zero(22,5,10);

}

void exit(){

	cout<<"\n\n"<<"Presione cualquier tecla para volver al menu";
	
	getch();

}


void selector(){
	
int opc;
int dado=0, dado2=0;


do{
	
	system("cls");
	
	cout<<"Bienvenido a este programa de dados digitales. Escoja entre un dados de"<<endl; 
	cout<<" 4,6,8 o 9 caras."<<endl<<endl;
	cout<<"Para hacerlo presione 1,2,3 o 4 segun sea el dado deseado"<<endl;
	cout<<" y se realizara un lanzamiento."<<endl<<endl;

	cout<<"1.- D4"<<endl<<endl;
	cout<<"2.- D6"<<endl<<endl;
	cout<<"3.- D8"<<endl<<endl;
	cout<<"4.- D9"<<endl<<endl;
	cout<<"5.- Salir"<<endl<<endl;

	opc=getch();
	
	switch(opc){
	
	case '1':
	
	system("cls");

	dado = 1 + rand() % 4;
	
	dado2= 1 + rand() % 4;

	filter(dado,dado2);

	fondo_dados();
	
	exit();
	
	break;
	
	case '2':
	
	system("cls");
	
	dado = 1 + rand() % 6;
	
	dado2= 1 + rand() % 6;
	
	filter(dado,dado2);

	fondo_dados();
	
	exit();
	
	break;
	
	case '3':
		
	system("cls");
		
	dado = 1 + rand() % 8;
	
	dado2= 1 + rand() % 8;
	
	filter(dado,dado2);

	fondo_dados();
	
	exit();
	
	break;
	
	case '4':
		
	system("cls");	
		
	dado = 1 + rand() % 9;
	
	dado2= 1 + rand() % 9;
	
	filter(dado,dado2);

	fondo_dados();
	
	exit();
	
	break;
	
	case '5':
	
	cout<<"Gracias por usar este programa, Soli deo Gloria!";
				
	break;
	
	default:
	break;
	
}	
		
	
}while(opc!='5');

}	
	


int main(){

system("cls");

selector();

return 0;

}
