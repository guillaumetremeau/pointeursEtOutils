#include <stdio.h>

void swap(char * pt1, char * pt2);

int main()
{
	int i  = 2, *ptri  = &i;
	char c1 = '1', *ptrc1 = &c1;
	char c2 = '2', *ptrc2 = &c2;
	double d = 1.2, *ptrd = &d;

	printf("int : i = %d ptri = %p &ptri = %p \n",i,ptri,&ptri);
	printf("char 1 : c1 = %c ptrc1 = %p &ptrc1 = %p \n",c1,ptrc1,&ptrc1);
	printf("char 2 : c2 = %c ptrc2 = %p &ptrc2 = %p \n",c2,ptrc2,&ptrc2);
	printf("double : d = %lf ptrd = %p &ptrd = %p \n",d,ptrd,&ptrd);

	swap(ptrc1,ptrc2);

	printf("\nint : i = %d ptri = %p &ptri = %p \n",i,ptri,&ptri);
	printf("char 1 : c1 = %c ptrc1 = %p &ptrc1 = %p \n",c1,ptrc1,&ptrc1);
	printf("char 2 : c2 = %c ptrc2 = %p &ptrc2 = %p \n",c2,ptrc2,&ptrc2);
	printf("double : d = %lf ptrd = %p &ptrd = %p \n",d,ptrd,&ptrd);

	return 0 ;
}

void swap(char * pt1, char * pt2){
	int temp = *pt1;
	*pt1 = *pt2;
	*pt2 = temp;
}
