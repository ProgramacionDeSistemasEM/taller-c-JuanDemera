#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#hola
int main(int argc, char **argv){
	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
////	printf("ingrese su peso");
//	scanf("%.2f",&elemento)
	//	
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	float sum = 0.0f;
	float max_imc = 0.0f;
	float variable=0.0f;
	float variableH=0.0f;
	for(int i; i<10;i++);{
		printf("ingrese peso:");
		scanf("%.2f",&variable);
		
		printf("ingrese Altura:");
		scanf("%.2f",&variableH);
		if(max_imc<(variable/(variableH*variableH)){
				max_imc=(variable/(variableH*variableH));
				}
				
		sum= max_imc+(variable/(variableH*variableH));
		}
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}
