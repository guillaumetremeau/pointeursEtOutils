#include <stdio.h>

void echangeParValeur(int a, int b);
void echangeParAdresse(int * a, int * b);

int main(){
	int i = 2;
	int j = 5;
	printf("\navant fonc valeur : i = %d, j = %d",i,j);
	echangeParValeur(i,j);
	printf("\naprès fonc valeur : i = %d, j = %d\n",i,j);
	printf("\n\navant fonc adresse : i = %d, j = %d",i,j);
	echangeParAdresse(&i,&j);
	printf("\naprès fonc adresse : i = %d, j = %d\n",i,j);
	return 0;
}

void echangeParValeur(int a, int b){
	printf("\nPar valeur, avant : a = %d et b = %d.",a,b);
	int temp = a;
	a = b;
	b = temp;
	printf("\nPar valeur, après : a = %d et b = %d.",a,b);
}

void echangeParAdresse(int * a, int * b){
	printf("\nPar adresse, avant : a = %d et b = %d.",*a,*b);
	char *temp = *a;
	*a = *b;
	*b = *temp;
	printf("\nPar adresse, après : a = %d et b = %d.",*a,*b);
}
