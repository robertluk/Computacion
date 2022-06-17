#include <stdio.h>
#include <stdlib.h>
main()
{
	int cant_p,i,cant_op,aux_cant_p,tipo_a,acum_p_a2,cont_a2=0,bandera=0,cont_a3=0,cont_errores=0;
	float presion_n,aux_presion_n,PASAJERO=(80*0.001),EQUIPAJE=(20*0.001),PL,TOW,FW,FW_2,FW_m,OEW,OEW_2,OEW_m;
	long int num_f,aux_num_f;
	printf("Bienvenido/a, ingrese la cantidad de operaciones a realizar:");
	scanf("%d",&cant_op);
	system("cls");
	for(i=0;i<cant_op;i++)
	{
	printf("\tingrese los siguientes datos\n\nNumero de fuselaje:");
	scanf("%ld",&num_f);
	printf("Cantidad de pasajeros:");
	scanf("%d",&cant_p);
	printf("Presion promedio de los neumaticos [MPa]:");
	scanf("%f",&presion_n);
		while(presion_n<1 || presion_n>1.5)
		{
			printf("\n\tALERTA\nPresion de neumaticos fuera de rango, vuelva a ingresar\n");
			cont_errores++;
			scanf("%f",&presion_n);
		}
	printf("\nTipo de avion (seleccione el numero correspondiente)\n1.Boeing 737-800\n2.Embrarer 170 o 175\n3.Airbus A330-800\n4.Aeronave pequena\n");
	scanf("%d",&tipo_a);
	
		if(tipo_a==1)
		{
			OEW=40,FW=(26000*0.001);
			if(bandera==0)
			{
				aux_num_f=num_f;
				aux_presion_n=presion_n;
				aux_cant_p=cant_p;
				bandera=1;
			}
			else
				if(presion_n<aux_presion_n)
					{
						aux_num_f=num_f;
						aux_presion_n=presion_n;
						aux_cant_p=cant_p;
					}
			OEW_m=OEW;
			FW_m=FW;
		}
		if(tipo_a==2)
			{
			OEW=20,FW=(9000*0.001);
			cont_a2++;
			acum_p_a2+=cant_p;
			OEW_2=OEW,FW_2=FW;
			}
		if(tipo_a==3)
			OEW=120,FW=(110000*0.001),cont_a3++;
		if(tipo_a==4)
			OEW=1.5,FW=(500*0.001);
	PL=cant_p*(PASAJERO+EQUIPAJE);
	TOW=OEW+PL+FW;
	system("cls");
	printf("El peso del avion al despegue es: %.2f Tn\n\n",TOW);
	}
	system("PAUSE");
	if(bandera!=0)
		{
			printf("\nEl avion cuya presion promedio de los neumaticos es minima corresponde a los siguientes datos\n");
			printf("Numero de fuselaje: %ld\n",aux_num_f);
			printf("Peso al despegue: %.2f Tn\n",(float)aux_cant_p*(PASAJERO+EQUIPAJE)+OEW_m+FW_m);
			printf("Presion promedio de los neumaticos: %.2f\n",aux_presion_n);
		}
	else
		printf("No se ingresaron aviones tipo 1\n");
	if(cont_a2!=0)
			printf("El promedio de los pesos de aviones tipo 2 es: %.2f Tn\n",(acum_p_a2*(PASAJERO+EQUIPAJE)+cont_a2*(OEW_2+FW_2))/cont_a2);
	else
		printf("No se ingresaron aviones tipo 2\n");
	if(cont_a3!=0)
		printf("Despegaron %d aviones tipo 3\n",cont_a3);
	else
		printf("No se ingresaron aviones tipo 3\n");
	if(cont_errores!=0)
	{
		printf("Se ingreso un %.2f%% de datos erroneos\n",(float)(cont_errores*100)/cant_op);
		printf("El dia de hoy aterrizaran %d aviones\n",cant_op);
	}
	else
		printf("No se ingresaron datos erroneos");
}
