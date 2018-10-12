#include<stdio.h>

char* nombre,*nombre1,*nombre2,*nombre3,*nombre4,*nombre5,*nombre6;
int peso, peso1, peso2, peso3, peso4, peso5, peso6;

void insertar (char nomb[30],int pes){
	nombre=nomb;
	peso=pes;
}

void insertar1(char nomb[30],int pes){
	nombre1=nomb;
	peso1=pes;
}

void insertar2 (char nomb[30],int pes){
	nombre2=nomb;
	peso2=pes;
}

void insertar3 (char nomb[30],int pes){
	nombre3=nomb;
	peso3=pes;
}

void insertar4 (char nomb[30],int pes){
	nombre4=nomb;
	peso4=pes;
}

void insertar5 (char nomb[30],int pes){
	nombre5=nomb;
	peso5=pes;
}

void insertar6 (char nomb[30],int pes){
	nombre6=nomb;
	peso6=pes;
}

void mostrar(){
	printf("Nombre:%s\n",nombre);
	printf("Peso:%d\n",peso);
	printf("Nombre:%s\n",nombre1);
	printf("Peso:%d\n",peso1);
	printf("Nombre:%s\n",nombre2);
	printf("Peso:%d\n",peso2);
	printf("Nombre:%s\n",nombre3);
	printf("Peso:%d\n",peso3);
	printf("Nombre:%s\n",nombre4);
	printf("Peso:%d\n",peso4);
	printf("Nombre:%s\n",nombre5);
	printf("Peso:%d\n",peso5);
	printf("Nombre:%s\n",nombre6);
	printf("Peso:%d\n",peso6);

}

int main(){
	
	insertar("Bulldog Frances",16);
	
	insertar1("Husky Siberiano",28);
	
	insertar2("Boxer",32);
	
	insertar3("Chow Chow",32);
	
	insertar4("Gran Danes",90);
	
	insertar5("Pastor Caucasico",55);
	
	insertar6("Komondor",50);
	
	mostrar();
	return 0;
}

