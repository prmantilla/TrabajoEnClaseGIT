#include<stdio.h>

class edificio{
	
	char *nombre;
	char *ubicacion;
	int altura;
	
	public:
		void insertar_nombre (char nom[30]){
			nombre=nom;
		}
		void insertar_ubicacion (char ubica[30]){
			ubicacion=ubica;
		}
		void insertar_altura (int altur){
			altura=altur;
		}

		void mostrar(){
			printf("Edificio:%s\n",nombre);
			printf("Ubicacion:%s\n",ubicacion);
			printf("Altura(m):%d\n",altura);
		}
};

int main(){
	
	edificio BURJ;
	
	BURJ.insertar_nombre ("BURJ KHALIFA");
	BURJ.insertar_ubicacion ("Dubai");
	BURJ.insertar_altura (828);
	BURJ.mostrar();

	edificio PING;
	
	PING.insertar_nombre ("PING AN FINANCE CENTER");
	PING.insertar_ubicacion ("Shenzhen");
	PING.insertar_altura (660);
	PING.mostrar();

	edificio TOKYO;
	
	TOKYO.insertar_nombre ("TOKYO SKY TREE");
	TOKYO.insertar_ubicacion ("Tokio");
	TOKYO.insertar_altura (634);
	TOKYO.mostrar();

	edificio TORRE;
	
	TORRE.insertar_nombre ("TORRE CENTRAL DE SHANGHAI");
	TORRE.insertar_ubicacion ("Shanghai");
	TORRE.insertar_altura (632);
	TORRE.mostrar();

	edificio PENTOMINIUN;
	
	PENTOMINIUN.insertar_nombre ("PENTOMINIUN DUBAI");
	PENTOMINIUN.insertar_ubicacion ("Dubai");
	PENTOMINIUN.insertar_altura (616);
	PENTOMINIUN.mostrar();

	
	return 0;
	
}
