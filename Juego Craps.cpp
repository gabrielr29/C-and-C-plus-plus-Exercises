#include "graficasletrasynumeros.h"

int filter(int random1, int random2);

class jugador{

	private:
	bool estado=false;
	int puntos, tag=0;
	
	public:
		
		void set_estado(bool s){
			estado=s;
		}
		void set_puntos(int p){
			puntos=p;
		}
		bool get_estado(){
			return estado;
		}
		int get_puntos(){
			return puntos;
		}
		void set_tag(int t){
			tag=t;
		}
		int get_tag(){
			return tag;
		}
		
		void change_status(){
			if(estado==false){
				estado=true;				
			}
			else{
				estado=false;
			}
		}
		
		
		void reset_puntos(){
			puntos=0;
		}
				
		};
		
void portada(){
	
	rectangulo(10,5,15,60);
	C(15,9,7); 
	R(24,9,7);
	A(33,9,7);
	P_2(42,9,7);
	S_2(51,9,7);
	getch();
	
}

void fondo_dados(){

zero(5,5,10);

zero(22,5,10);

}	

void selector(jugador j){

int opc;

string numberdiv;

int numberint;
	
int dado=0, dado2=0;

int tirada;

do{
	
	system("cls");
	
	cout<<"          Bienvenido a Craps el juego de dados, presione 1 para  "<<endl;
	cout<<"                   empezar tirar o 0 para salir. "<<endl;
	

	opc=getch();
	
	switch(opc){
	
	case '1':
	
	dado = 1 + rand() % 6;
	
	dado2= 1 + rand() % 6;
		
	fondo_dados();	
	j.set_puntos(filter(dado,dado2));
    
    if(j.get_puntos()==7 || j.get_puntos()==11){
    	
    	cout<<"\n\n\n"<<"Felicidades, eres el ganador!";
    	j.change_status();
    	getch();
    	    	
	}
	else if(j.get_puntos()==2 || j.get_puntos()==3 || j.get_puntos()==12){
		cout<<"\n\n\n"<<"Craps! Perdiste, gana la casa ";
		getch();
	}
	else if(j.get_puntos()==4 || j.get_puntos()==5 || j.get_puntos()==6 || j.get_puntos()==8 || j.get_puntos()==9 || j.get_puntos()==10){
		
		cout<<"\n\n\n"<<"Uff, ni Craps ni tiro ganador... Tu nueva tirada ganadora es  "<<j.get_puntos()<<" "<<endl;
		cout<<"Sigue tirando los dados... Pulsa cualquier boton para hacerlo"<<endl;
		tirada=j.get_puntos();
		
		getch();
		system("cls");
		
		do{
		
		dado = 1 + rand() % 6;
	
		dado2= 1 + rand() % 6;	
		
		fondo_dados();
		j.set_puntos(filter(dado,dado2));
		
		if(j.get_puntos()==tirada){
		cout<<"\n\n\n"<<"Felicidades, eres el ganador!"<<endl;
    	j.change_status();	
    	j.set_tag(1);
    	getch();
    	system("cls");
		}
		else if(j.get_puntos()==7){
		cout<<"\n\n\n"<<"Uyyy, mala tirada, perdiste. La casa gana esta vez";
		j.set_tag(0);
		getch();
		system("cls");
		}
		else{
					
		cout<<"\n\n\n"<<"Uff, ni Craps ni tiro ganador... Toca otro lanzamiento";
		j.set_tag(2);
		getch();
		system("cls");

		}	
			
		}while(j.get_tag()==2);
	} 

	break;
	
	case '0':
	
	cout<<"\n"<<"Gracias por usar este programa, saludos desde Venezuela!"<<"\n";
				
	break;
	
	default:
	break;
	
}			
}while(opc!='0');

}



int filter(int random1, int random2){
	
	int sumatoria=0;
	
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
	else{
	}
	
	sumatoria=random1+random2;
	return sumatoria;
}



int main(){
	
	portada();	
	
	jugador hbd;
	
	selector(hbd);
	
}

void winner(){
	
	rectangulo(10,5,15,60);
	W(15,9,7); 
	I_2(24,9,7);
	N(33,9,7);
	N(42,9,7);
	E_mejorada(51,9,7);
	R(60,9,7);
	getch();
	
}


		
