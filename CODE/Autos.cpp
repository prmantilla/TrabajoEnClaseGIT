#include<stdio.h>

/*autos mas potentes del mundo*/

char *coche,*coche1,*coche2,*coche3,*coche4;
int potencia, potencia1, potencia2, potencia3, potencia4;
int velocidad, velocidad1, velocidad2, velocidad3, velocidad4;

void insertar (char coch[30],int poten,int vel){
	coche=coch;
	potencia=poten;
	velocidad=vel;
}

void insertar1 (char coch[30],int poten,int vel){
	coche1=coch;
	potencia1=poten;
	velocidad1=vel;
}

void insertar2 (char coch[30],int poten,int vel){
	coche2=coch;
	potencia2=poten;
	velocidad2=vel;
}

void insertar3 (char coch[30],int poten,int vel){
	coche3=coch;
	potencia3=poten;
	velocidad3=vel;
}

void insertar4 (char coch[30],int poten,int vel){
	coche4=coch;
	potencia4=poten;
	velocidad4=vel;
}
void mostrar(){
	printf("Coche:%s\n",coche);
	printf("Potencia(CV):%d\n",potencia);
	printf("Vel. Punta(Km/h):%d\n",velocidad);
	printf("Coche:%s\n",coche1);
	printf("Potencia(CV):%d\n",potencia1);
	printf("Vel. Punta(Km/h):%d\n",velocidad1);
	printf("Coche:%s\n",coche2);
	printf("Potencia(CV):%d\n",potencia2);
	printf("Vel. Punta(Km/h):%d\n",velocidad2);
	printf("Coche:%s\n",coche3);
	printf("Potencia(CV):%d\n",potencia3);
	printf("Vel. Punta(Km/h):%d\n",velocidad3);
	printf("Coche:%s\n",coche4);
	printf("Potencia(CV):%d\n",potencia4);
	printf("Vel. Punta(Km/h):%d\n",velocidad4);
}

int main(){
	
	insertar("SSC Tautara",1369,444);
	
	insertar1("Remac Comsept_S",1384,365);
	
	insertar2("Koenigsegg Regera",1500,450);
	
	insertar3("Bugatti Chiron",1500,420);
	
	insertar4("Hennessey Venom F5",1622,484);
	
	mostrar();
	return 0;
}

