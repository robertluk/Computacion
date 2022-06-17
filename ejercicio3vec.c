#include <stdio.h>
main()
{
	int i,N,a;
	float v[50],n[50],p[50];
	printf("Ingrese la cantidad de numeros que contendran los vectores:\n");
	scanf("%d",&N);
	printf("Ingrese los numeros del primer vector:\n");
	for(i=0;i<N;i++)scanf("%f",&v[i]);
	printf("Ingrese los numeros del segundo vector:\n");
	for(i=0;i<N;i++)scanf("%f",&n[i]);
	printf("Los numeros del vector resultante son:\n");
	a=N;
	for(i=0;i<N;i++)
	{
		p[i]=v[i]*n[a-1];
		printf("%.2f\n",p[i]);
		a--;	
	}
}
