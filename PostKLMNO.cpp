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
 
 
 // KLMNO
 
 
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

void O(int x, int y, int n)
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


int main (){

		system("cls");
		
		K(1,2,6);
		
		L(9,2,6);
		
		M(17,2,6);
		
		N(25,2,6);
		
		O(33,2,6);
		
		O_2(41,2,6);
					
		getch();	

		return 0;
	
	
}
 
