//Diagonal invertida  j==n-i  o tambien i+j==n-1    Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

// j=x  i=y

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#include <stdlib.h>

using namespace std;


 int gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
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

void V(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if((i==j&&i>0&&i<n/2+1) || (i+j==n-1&&i>0&&i<n/2+1))
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

	 
	 int main (){

		system("cls");
		
	/*
	Dado que existen ciertas problemas con la simetría cuando
	el tamaño es par (en las letras que incluyen lineas inclinadas), es bueno
	optar por tamaños impares y en caso de querer una animación de 
	crecimiento hacerlo de modo que cada crecimiento resulte en 
	un número que no reviva el problema. 
	
	*/
	
		V(1,8,7);
		
		Vmejor(9,8,7);
		
		//W(18,8,7);
		
		//X(27,8,7);
		
		//Y(36,8,7);
		
		//Z(45,8,7);
					
		getch();	

		return 0;
	
	
}
 
