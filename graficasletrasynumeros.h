#include <iostream>
#include <conio.h>
#include <windows.h> 

using namespace std;

//Diagonal invertida  j==n-i  o tambien i+j==n-1    Diagonal: i==j    Linea superior i==0    Linea inferior i==n-1   

// j=x  i=y

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
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

void rectangulo(int x, int y, int n, int n2)
{
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;j<n2;j++)
            {
                    if(i==0 || i==n-1 || j==0 || j==n2-1) 
                    {
                        gotoxy(x+j,y+i);
                        cout<<"x";                                                                                                                                                                 
                    }
            }
    }
}
