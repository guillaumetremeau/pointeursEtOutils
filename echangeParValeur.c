#include <stdio.h>

void echangeParValeur(int a, int b);
void echangeParAdresse(int a, int b);
int main(){

	return 0;
}

void echangeParValeur(int a, int b){
	printf("\nPar valeur, avant : a = %d et b = %d.",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("\nPar valeur, après : a = %d et b = %d.",a,b);
}

void echangeParAdresse(int a, int b){

}
