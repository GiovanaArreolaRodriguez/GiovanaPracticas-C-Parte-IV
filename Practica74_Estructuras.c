#include <stdio.h>
struct CD{
	char titulo[100];
	char artista[50];
	char numCanciones[4];
	int anio[4];
	int precio;
};

int main(void){
	struct CD cd1, cd2, cd3,cd4, cd5;
	printf("Ingresa el titulo \n");
	gets(cd1.titulo);
	printf("Ingresa el artista \n");
	gets(cd2.artista);
	printf("¿Cuantas canciones tiene? \n");
	gets(cd3.numCanciones);
	printf("Año de publicacion \n");
	gets(&cd4.anio);
	printf("Cual es el precion de la cancion \n");
	gets(&cd5.precio);
	
	printf("Titulo de la cancion: %s\n", cd1.titulo);
	printf("Artista: %s\n", cd2.artista);
	printf("Canciones producidas: %s\n", cd3.numCanciones);
	printf("Año de publicacion: %s\n", cd4.anio);
	printf("Precio de la cancion %s\n", &cd5.precio);
	
	system("Pause");
	return 0;
}
