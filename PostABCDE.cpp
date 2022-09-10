//Diagonal invertida  j==n-i       Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

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

void B_simple(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( i==0 ||  j==n-1 || j==0 || i == n/2|| i==n-1)
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

void D_diagonales(int x, int y, int n) //(solo 8 caracteres)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || i==j&&i<=n/2 ||  i==j&&i>=n/2 || i==(n/2)+1&&j==(n/2)-1 || j==j/j+1&&i==n-2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"*";                                                                                                                                                                 
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


void E_simple(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 ||  i==0 || (j<=n-1&&i==n/2) || i==n-1)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

int main (){
   
		system("cls");
						
		A(1,2,8);
		
		B_simple(10,2,8);
		
		B_mejorada(19,2,8);
		
		C(28,2,8);
		
		D_simple(38,2,8);
		
		D_diagonales(47,2,8);
		
		E_simple(53,2,8);
		
		E_mejorada(63,2,8);
			
		getch();	
	
		return 0;
}
