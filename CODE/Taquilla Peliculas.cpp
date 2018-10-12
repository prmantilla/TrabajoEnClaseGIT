#include<stdio.h>

class pelicula{
	
	char *nombre;
	int estreno,presupuesto,ganancias;
	
	public:
		void insertar_nombre (char nom[30]){
			nombre=nom;
		}
		void insertar_estreno (int estren){
			estreno=estren;
		}
		void insertar_presupuesto (int presup){
			presupuesto=presup;
		}
		void insertar_ganancias (int ganan){
			ganancias=ganan;
		}
		void mostrar(){
			printf("Pelicula:%s\n",nombre);
			printf("Estreno:%d\n",estreno);
			printf("Presupuesto(millones):%d\n",presupuesto);
			printf("ganacias(millones):%d\n\n",ganancias);
		}
};

int main(){
	
	pelicula Avatar;
	
	Avatar.insertar_nombre ("Avatar");
	Avatar.insertar_estreno (2009);
	Avatar.insertar_presupuesto (237);
	Avatar.insertar_ganancias (2787);
	Avatar.mostrar();

	pelicula Titanic;
	
	Titanic.insertar_nombre ("Titanic");
	Titanic.insertar_estreno (1997);
	Titanic.insertar_presupuesto (200);
	Titanic.insertar_ganancias (2816);
	Titanic.mostrar();

	pelicula StarWars;
	
	StarWars.insertar_nombre ("Star Wars: Episodio VII - El Despertar de la Fuerza");
	StarWars.insertar_estreno (2015);
	StarWars.insertar_presupuesto (200);
	StarWars.insertar_ganancias (2068);
	StarWars.mostrar();

	pelicula Jurassic;
	
	Jurassic.insertar_nombre ("Jurassic World");
	Jurassic.insertar_estreno (2015);
	Jurassic.insertar_presupuesto (150);
	Jurassic.insertar_ganancias (1617);
	Jurassic.mostrar();

	pelicula TheAvengers;
	
	TheAvengers.insertar_nombre ("The Avengers");
	TheAvengers.insertar_estreno (2012);
	TheAvengers.insertar_presupuesto (220);
	TheAvengers.insertar_ganancias (1519);
	TheAvengers.mostrar();
	
	return 0;
	
}
