#include <stdio.h>
struct Empleado{
	char nombre[100];
	char sexo[50];
	char sueldo[8];
};

int main(void){
	struct Empleado cd1, cd2, cd3;
	int i, j;
	for(i=1;i<5;i++){
		//INFORMACION LLENADO
		printf("Cual es el nombre del empleado \n");
		gets(cd1.nombre);
		printf("Sexo del empleado \n");
		gets(cd2.sexo);
		printf("Cual es el sueldo del empleado \n");
		gets(cd3.sueldo);

		//IMPRESION DE LA INFORMACION
		printf("Empleado No. %d\n", i);
		printf("Nombre del empleado: %s\n", cd1.nombre);
		printf("Sexo : %s\n", cd2.sexo);
		printf("Sueldo: $%s \n\n", cd3.sueldo);
	}
		printf("Empleado No. %d\n", i);
		printf("Nombre del empleado: %s\n", cd1.nombre);
		printf("Sexo : %s\n", cd2.sexo);
		printf("Sueldo: $%s \n\n", cd3.sueldo);
	
	system("Pause");
	return 0;
}
