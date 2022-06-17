#include <stdio.h>
main()
{
	int i;
	float num,v[10];
	printf("Ingrese 10 numeros reales:\n");
	for(i=0;i<10;i++) scanf("%f",&v[i]);
	printf("Los numeros a la inversa son:\n");
	for(i=9;i>-1;i--) printf("%.2f\n",v[i]);
}
