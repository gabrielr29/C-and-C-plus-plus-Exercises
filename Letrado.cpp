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

void D(int x, int y, int n) //(solo 8 caracteres)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || i==j&&i<=n/2 || i==(n/2)+1&&j==(n/2)-1 || j==j/j+1&&i==n-2)
                    {
                        gotoxy(x+j,y+i);
                        cout<<"*";                                                                                                                                                                 
                    }
            }
    }
}


void E(int x, int y, int n)
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

void S(int x, int y, int n)
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

void I(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==n/2&&j==n/2)
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
                    if(j==0 || j==n-1 || i==n/2&&j==n/2 || (i==j&&i>n/2&&i<n) || (i==j&&i>n/2&&i<n) || (i+j==n-1&&i>n/2&&i<n) )
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
                    if( j==0 || j==n-1 || (i==j&&i>0&&i<n/2+1) || (i+j==n-1&&i>0&&i<n/2+1))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void VFEA(int x, int y, int n)
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

void N(int x, int y, int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if( j==0 || j==n-1 || (i==j&&i>0&&i<n-1))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}
void V(int x, int y,int n){
	int i,j;
	for (i=0;i<n;i++){
 	for (j=0;j<n;j++){
 	if (i==0&&j<=n-3||i==n-1&&j<=n-3||i==n-4&&j==n-2||i==n-3&&j==n-1||j==n-2&&i==n-2){
 		gotoxy(i,j);
 	cout<<"#"; }
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
                    if((i==j&&i>0&&i<n/2+1) || (i+j==n-1&&i>0&&i<n/2+1))
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}
	 
	 
 void W2(){
	int i,j,n=5;
	for (i=0;i<n;i++){
 	for (j=0;j<n;j++){
 	if (i==0||i==4||i==j&&j>=2||i==1&&j==3){
 		gotoxy(i,j+10);
 	cout<<"#"; }}}}


void T(int x, int y, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                    if(j==n/2 || i==n/n-1 )
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}

void B(int x, int y, int n)
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



int main (){
	int n=5,x=0,y=2;
    

		system("cls");
		
		R(1,2,n);
		B(9,2,n);
	
		
		getch();	

	
	return 0;
	
	
}
