#include <stdio.h>
#define DOC 10
main()
{
	int i,cont=0,c=0,k,d=0;
	long int v[10],m[10],mayor[10];
	printf("Ingrese los 10 numeros de documento:\n");
	for(i=0;i<DOC;i++)scanf("%ld",&v[i]);
	for(i=0;i<DOC;i++)
	{
		if(v[i]>25000000)
		{
			m[c]=v[i];
			c++;
		}
		else 
			cont++;
		if(i==0)
			mayor[d]=v[i];
		else 
			if(v[i]>mayor[d])mayor[d]=v[i];
	}
	if(c==0)
		printf("No se ingresaron numeros de documento mayores a 25000000\n");
	else
	{
	printf("Los documentos con numero mayor a 25000000 son:\n");
	for(k=0;k<c;k++)printf("%ld\n",m[k]);
	}
	if(cont==0)
		printf("No se ingresaron numeros de documento menores a 25000000\n");
	else	
		printf("Hay %d numeros de documento menores o iguales a 25000000\n",cont);
	printf("El mayor numero de documento ingresado es: %ld",mayor[d]);
}		
