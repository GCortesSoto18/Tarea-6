#include <stdio.h>

void suma_promedionumeros  (int num1,int num2,char nombre [3]){
	
	int suma;
	int promedio;
	
	suma = num1 + num2;
	promedio = suma/2;
	printf (" la suma es : %d \n" , suma);
	printf (" el promedio es : %d \n" , promedio);
	printf (" mi primer nombre es : %s", nombre);
}
int main(int argc, char *argv[]) {
	char nombre[3];
	int num1,num2;
	printf (" ingresa un numero ");
	scanf (" %d" , &num1);
	printf (" ingresa el segundo numero ");
	scanf (" %d" , &num2);
	printf (" ingresa tu primer nombre\n");
	scanf ("%s" , nombre);
	
	suma_promedionumeros(num1,num2,nombre);
	
	
	
	
	return 0;
}

