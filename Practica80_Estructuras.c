#include <stdio.h>
struct fraccion{ 
	int den; 
	int num; 
}; 
int main(void) { 
	struct fraccion frac1; 
	struct fraccion frac2; 
	frac1.den = 3; frac1.num = 4; 
	frac2.den = 6; frac2.num = 2; 
	multipli(frac1, frac2); 
	system("Pause"); 
	return 0; 
}
int multipli (struct fraccion mul1,struct fraccion mul2){ 
	int den = mul1.den * mul2.den; 
	int nom = mul1.num * mul2.num;
	printf("%d/%d \n" ,den, nom);
	return 0;
}
