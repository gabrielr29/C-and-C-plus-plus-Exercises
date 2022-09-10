//Diagonal invertida  j==n-i  o tambien i+j==n-1    Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

// j=x  i=y

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#include <stdlib.h>

using namespace std;

void filter(int random1);
void exit();
void zero(int x, int y, int n);
void fondo_letra();

 int gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 

void selector(){
	
int opc;

string numberdiv;

int numberint;
	

do{
	
	system("cls");
	
	cout<<"           Bienvenido a este programa para generar letras aleatoriamente, "<<endl;
	cout<<"                     presione 1 para iniciar o 0 para salir."<<endl; 
	

	opc=getch();
	
	switch(opc){
	
	case '1':
		
	numberint = 1 + rand() % 27;

	filter(numberint);
	fondo_letra();
	
	exit();
		
	break;
	
	case '0':
	
	cout<<"\n"<<"Gracias por usar este programa, Soli deo Gloria!"<<"\n";
				
	break;
	
	default:
	break;
	
}	
		
	
}while(opc!='0');

}

void fondo_letra(){

zero(4,4,14);

}
 
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

void exit(){

	cout<<"\n\n"<<"Presione cualquier tecla para volver al menu";
	
	getch();
	
	system("cls");

}


void A(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==0 || j==0 || j==n-1 || i==n/2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void B_mejorada(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j<n-1 || i>0 && i<n-1 && j==n-1 ||  j<n-1 && i==n-1 || j==0  || i == n/2  )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void C(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==0 || j==0 || i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void D_simple(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j<n-1 || i>0 && i<n-1 && j==n-1 ||  j<n-1 && i==n-1 || j==0 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void E_mejorada(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i>0 && i<n-1 && j==0 && j<n-1 || i == n/2 || j>0 && i==0 || j>0 && i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void F(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 ||  i==0 || (j<n-2 && i==n/2) )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void G(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==0 || j==0 || i==n-1 || j==n-1&&i>=n/2 || i==n/2&&j>=n/2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void H(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==n/2 || j==0 || j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void I_2(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==n/2 || i==0 || i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void J(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==0 && j>n/2 || i==n-1 || j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


 
void K(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)   {
                    if( j==0  || j<n/2 && i==n/2 || (j==n/2&&i==n/2+1) || (j==n/2&&i==n/2-1) || (i==j&&i>n/2) || j==n-i-1 && i<n/2){
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void L(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==0 || i==n-1 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void M(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || j==n-1 || (i==j&&i>0&&i<n/2+1) || (i+j==n-1&&i<n/2+1))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void N(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || j==n-1 || i==j)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void O_2(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j>0 && j<n-1 && i==0 || j==0 && i>0 && i<n-1 || j==n-1 && i>0 && i<n-1 ||  j>0 && j<n-1 && i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void N_ausentinenglish(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j>n/2-3 && j<n/2+2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void P_2(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 && i>0 && i<=n-1 || j>0 && j<n-1 && i==0 || (j==n-1&& i>0 && i<n/2) || (j<n-1&&i==n/2))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void Q(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j>0 && j<n-1 && i==0 || j==0 && i>0 && i<n-1 || j==n-1 &&  i>0 && i<=n/2 ||  j>0 && j<=n/2 && i==n-1 ||  j==i && i>=n/2 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void R(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)   {
                    if( j==0 || (j==n-1&&i<=n/2) || i==0 || (j<=n-1&&i==n/2) || (j==n/2&&i==n/2+1) || (i==j&&i>n/2&&i<n) ){
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void S_2(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 && j>0 && j<=n-1 ||  (j>0 && j<n-1 && i==n/2) || j<n-1 && i==n-1 || j==0 && i>0 && i<n/2 || j==n-1 && i>n/2 && i<n-1 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void T(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==n/2 || j==n/2-1 || i==0 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void U(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==0 || i==n-1 || j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void Vmejor(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==n-1 && j>=n/2-1 && j<n/2+2 || i==n-2 && j==n/2-2 || i==n-2 && j==n/2+2 || i==n-3 && j==n/2-3 || i==n-3 && j==n/2+3 || j==0 && i<n/2+2 || j==n-1 && i<n/2+2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void W(int x, int y, int n)
{
       for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                    if(j==0 || j==n-1 || i==n/2&&j==n/2 || (i==j&&i>n/2) || (i+j==n-1&&i>n/2) )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void X(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==j || i+j==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void Y(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i==j  && i<n/2||  i+j==n-1 && i<n/2 || j==n/2 && i>=n/2) 
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}


void Z(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(i+j==n-1  || i==0 || i==n-1) 
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}





int main(){

system("cls");

selector();

return 0;

}

void filter(int random1){
	
	//Para el primer dado
	
	if(random1==1){
	A(7,7,7);
	}
	else if(random1==2){
		
	B_mejorada(7,7,7);			

	}
	else if(random1==3){
		
	C(7,7,7);
		
	}
	else if(random1==4){
		
	D_simple(7,7,7);
	
	}
	else if(random1==5){
	
	E_mejorada(7,7,7);	
		
	}
	else if(random1==6){
		
	F(7,7,7);	
		
	}
	else if(random1==7){
	
	G(7,7,7);	
		
	}
	else if(random1==8){
	
    H(7,7,7);
		
	}
	else if(random1==9){
		  
    I_2(7,7,7);	
		
	}
	
	else if(random1==10){
		  
    J(7,7,7);	
		
	}

	else if(random1==11){
		  
    K(7,7,7);	
		
	}
	else if(random1==12){
		  
    L(7,7,7);	
		
	}

	else if(random1==13){
		  
    M(7,7,7);	
		
	}
	else if(random1==14){
		  
    N(7,7,7);	
		
	}
	else if(random1==15){
	
	//Para la letra "Ñ"
		  
	N_ausentinenglish(7,7,7);

	N(7,8,7);	
		
	}
	else if(random1==16){
		  
    O_2(7,7,7);	
		
	}
	else if(random1==17){
		  
    P_2(7,7,7);	
		
	}
	else if(random1==18){
		  
    Q(7,7,7);	
		
	}
	else if(random1==19){
		  
    R(7,7,7);	
		
	}
	else if(random1==20){
		  
    S_2(7,7,7);	
		
	}
	else if(random1==21){
		  
    T(7,7,6);	
		
	}
	else if(random1==22){
		  
    U(7,7,7);	
		
	}
	else if(random1==23){
		  
    Vmejor(7,7,7);	
		
	}
	else if(random1==24){
		  
    W(7,7,7);	
		
	}
	else if(random1==25){
		  
    X(7,7,7);	
		
	}
	else if(random1==26){
		  
    Y(7,7,7);	
		
	}
	else if(random1==27){
		  
    Z(7,7,7);	
		
	}
}


