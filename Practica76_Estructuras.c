#include <stdio.h>
struct Atleta{
	char deporte[100];
	char nombre[50];
	char pais[50];
	int no_medallas[3];
};

int main(void){
	struct Atleta cd1, cd2, cd3, cd4;
	printf("Tipo de deporte \n");
	gets(cd1.deporte);
	
	printf("Cual es el nombre del atleta \n");
	gets(cd2.nombre);
	printf("De que pais viene \n");
	gets(cd3.pais);
	printf("Cuantas medallas tiene \n");
	gets(&cd4.no_medallas);
	
	printf("Deporte:%s\n", cd1.deporte);
	printf("Nombre del atleta:%s\n", cd2.nombre);
	printf("Pais: %s\n", cd3.pais);
	printf("No. de medallas:%s\n", &cd4.no_medallas);
	
	system("Pause");
	return 0;
}
