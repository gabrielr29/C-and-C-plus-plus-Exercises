//Diagonal invertida  j==n-i       Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

// j=x  i=y

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#include <stdlib.h>

using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 
 // ÑPQRST


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

void P(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || (j==n-1&&i<=n/2) || i==0 || (j<=n-1&&i==n/2))
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

void S(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 ||  (j<=n-1&&i==n/2) || i==n-1 || j==0&&i<n/2 || j==n-1&&i>=n/2)
                    {
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

int main (){

		system("cls");
		
		P(1,2,8);
		
		P_2(11,2,8);
		
		Q(20,2,8);
		
		R(29,2,8);
		
		// N_asuntinenglish es para la barra que va sobre la n para distinguirla de la Ñ, por eso se coloca 2 puntos por encima de ella pero en la misma posición en y
		
		N_ausentinenglish(39,1,8);

		N(39,2,8);
		
		S(48,2,8);
		
		S_2(57,2,8);
		
		T(66,2,8);
					
		getch();	

		return 0;
	
	
}
 
